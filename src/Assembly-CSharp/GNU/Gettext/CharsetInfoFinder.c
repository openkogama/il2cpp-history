
/* Boolean OnEntry(String, String, Boolean, String[], String, String[], String, String[], String) */

bool Assembly-CSharp.dll::GNU::Gettext::CharsetInfoFinder::CharsetInfoFinder_OnEntry
               (CharsetInfoFinder *this,String *msgid,String *msgidPlural,bool hasPlural,
               String__Array *translations,String *flags,String__Array *references,String *comment,
               String__Array *autocomments,String *msgctxt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgid,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 1;
  }
  this_00 = (Catalog *)func_?(TypeInfo__GNU__Gettext__Catalog);
  Catalog::Catalog__ctor(this_00,(MethodInfo *)0x0);
  if (translations != (String__Array *)0x0) {
    if (translations->max_length == 0) goto code_?;
    if (this_00 != (Catalog *)0x0) {
      Catalog::Catalog_ParseHeaderString(this_00,translations->vector[0],(MethodInfo *)0x0);
      a = (this_00->fields).Charset;
      (this->fields).charset = a;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_CHARSET,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        (this->fields).charset = StringLiteral_iso_8859_1;
      }
      return 0;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* CharsetInfoFinder(String) */

void Assembly-CSharp.dll::GNU::Gettext::CharsetInfoFinder::CharsetInfoFinder__ctor
               (CharsetInfoFinder *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  encoding = mscorlib.dll::System::Text::Encoding::Encoding_GetEncoding_1
                       (StringLiteral_iso_8859_1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  CatalogParser::CatalogParser__ctor((CatalogParser *)this,text,encoding,(MethodInfo *)0x0);
  (this->fields).charset = StringLiteral_iso_8859_1;
  return;
}

