/// <reference types="./node_modules/tree-sitter-cli/dsl.d.ts" />

module.exports = grammar({
  name: "r",
  rules: {
    spec_file: $ => repeat(seq($.section, "\n")),
    section: $ => choice(
      $._attr,
      $._cmd,
      $.changeLogEntry,
      $.comment,
      $.code,
    ),
    _attr: $ => seq($.attr,$.code),
    attr: $ => /[A-Z][a-zA-Z]+\d?:/,
    _cmd: $ => seq($.cmd, optional(seq(/\s/,$.code)) ),
    cmd: $ => /%[a-zA-Z]+/,
    comment: $ => seq("#", $._code),
    changeLogEntry: $ => seq(choice("*","-"),$._code),
    code: $ => $._code,
    _code: $ => repeat1($._any),
    _any: $ => /[^\n]/
    // FIXME: is there a way to highlight variables
    // example:`install -d %{buildroot}/%{_datadir}/icons/hicolor/512x512/apps`
    // var: $ => seq("%{",repeat1(/[^}]/),"}"),
  }
});
