
/* Void Set(ChatConsoleMode, RectTransform ByRef) */

void Assembly-CSharp.dll::ChatConsoleModes::ChatConsoleModes_Set
               (ChatConsoleModes *this,ChatConsoleMode__Enum chatConsoleMode,
               RectTransform **rectTransform,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  (this->fields).chatConsoleMode = chatConsoleMode;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).chatConsoleModeDefs;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?(0);
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
           List_1_UnityEngine_Color32__GetEnumerator
                     ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                      MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__GetEnumerator__
                     );
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
  CStack_6.monitor = (MonitorData *)pLVar9->next;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
  CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
  uStack_1 = 0;
  do {
    cVar11 = func_?(&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__MoveNext__
                           );
    if (cVar11 == '\0') goto code_?;
    this_01 = (ChatConsoleModeDef *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        (&CStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__get_Current__
                        );
    if (this_01 == (ChatConsoleModeDef *)0x0) goto code_?;
  } while ((this_01->fields).ChatConsoleMode != chatConsoleMode);
  ChatConsoleModeDef::ChatConsoleModeDef_Set(this_01,rectTransform,(MethodInfo *)0x0);
code_?:
  *puStack_7 = 0x57;
  uStack_1 = 0xffffffff;
  func_?();
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* ChatConsoleModes() */

void Assembly-CSharp.dll::ChatConsoleModes::ChatConsoleModes__ctor
               (ChatConsoleModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ChatConsoleModeDef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__List__);
  (this->fields).chatConsoleModeDefs = (List_1_ChatConsoleModeDef_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

