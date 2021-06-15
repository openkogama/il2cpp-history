
/* Void Register() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials_Register
               (OverrideMaterials *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).overrideMaterials;
  puStack_4 = &stack0xffffffbc;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_4 = &stack0xffffffbc;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<OverrideMaterial>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar7->l;
    CStack_6.monitor = (MonitorData *)pLVar7->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar7->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar9 = func_?();
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (OverrideMaterial *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__get_Current__
                          );
      if (this_01 == (OverrideMaterial *)0x0) break;
      OverrideMaterial::OverrideMaterial_Register(this_01,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials_Update
               (OverrideMaterials *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSStack_6 = (StreamWriter *)0x0;
  LStack_7.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_7.monitor = (MonitorData *)0x0;
  LStack_7.fields._items = (Color32__Array *)0x0;
  LStack_7.fields._size = 0;
  func_?();
  uStack_8 = 0xffffffff;
  if ((this->fields).dumpToSql == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  piStack_9 = (int *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_9 = (int *)&stack0xffffffa8, puStack_4 = &stack0xffffffa8,
     (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    piStack_9 = (int *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Dumping_override_materials_to_sq,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  arg0 = (StreamWriter *)TypeInfo__System__String->static_fields->Empty;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).overrideMaterials;
  pSStack_10 = arg0;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,this_00,
                        MethodInfo__System__Collections__Generic__List<OverrideMaterial>__GetEnumerator__
                       );
    LStack_7.klass = (List_1_UnityEngine_Color32___Class *)pLVar11->l;
    LStack_7.monitor = (MonitorData *)pLVar11->next;
    LStack_7.fields._items = (Color32__Array *)pLVar11->ver;
    LStack_7.fields._size = (pLVar11->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_12._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
      ;
      auStack_12._0_4_ = &LStack_7;
      cVar13 = func_?();
      if (cVar13 == '\0') break;
      arg1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&LStack_7,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__get_Current__
                       );
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      arg0 = (StreamWriter *)
             mscorlib.dll::System::String::String_Concat((Object *)arg0,arg1,(MethodInfo *)0x0);
      pSStack_10 = arg0;
    }
    iVar14 = 0;
    *piStack_9 = 0x5b;
    uStack_1 = 0xffffffff;
    func_?(&LStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
                   );
    if (pSStack_6 == (StreamWriter *)0x0) {
      if (*piStack_9 == 0x5b) {
        iVar14 = -1;
      }
      pSStack_10 = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
      mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_4
                (pSStack_10,StringLiteral_Materials_txt,0,(MethodInfo *)0x0);
      uStack_1 = 2;
      if (pSStack_10 == (StreamWriter *)0x0) goto code_?;
      (*(code *)(((String__Class *)pSStack_10->klass)->vtable).System_IConvertible_ToType.method)
                (pSStack_10);
      arg0 = pSStack_6;
      piStack_9[iVar14 + 1] = 0x80;
      uStack_1 = 0xffffffff;
      if (pSStack_10 != (StreamWriter *)0x0) {
        func_?(0);
      }
      if (arg0 == (StreamWriter *)0x0) {
        (this->fields).dumpToSql = 0;
        goto code_?;
      }
    }
    else {
      func_?(pSStack_6,0,0);
    }
    func_?(arg0);
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* OverrideMaterials() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials__ctor
               (OverrideMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<OverrideMaterial>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<OverrideMaterial>__List__);
  (this->fields).overrideMaterials = (List_1_OverrideMaterial_ *)this_00;
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

