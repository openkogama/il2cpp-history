
/* Void Awake() */

void Assembly-CSharp.dll::Styles::Styles_Awake(Styles *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff34;
  puVar5 = &stack0xffffff34;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  CStack_10.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_10.monitor = (MonitorData *)0x0;
  CStack_10.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_10.fields.syncRoot = (Object *)0x0;
  CStack_11.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_11.monitor = (MonitorData *)0x0;
  CStack_11.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_11.fields.syncRoot = (Object *)0x0;
  CStack_12.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_12.monitor = (MonitorData *)0x0;
  CStack_12.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_12.fields.syncRoot = (Object *)0x0;
  CStack_13.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_13.monitor = (MonitorData *)0x0;
  CStack_13.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_13.fields.syncRoot = (Object *)0x0;
  func_?();
  iStack_14 = -1;
  piStack_15 = (int *)&stack0xffffff34;
  puStack_4 = &stack0xffffff34;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_15 = (int *)&stack0xffffff34, puStack_4 = &stack0xffffff34,
     (TypeInfo__Styles->_1).cctor_started == 0)) {
    piStack_15 = (int *)&stack0xffffff34;
    puStack_4 = &stack0xffffff34;
    func_?(TypeInfo__Styles);
  }
  if (TypeInfo__Styles->static_fields->isInitialized != 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_00 = (this->fields).buttonStyles;
  if (this_00 == (List_1_Styles_ButtonStyleDef_ *)0x0) {
code_?:
    func_?(0);
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
  }
  else {
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                           MethodInfo__System__Collections__Generic__List<Styles::ButtonStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->buttonStylesDictionary =
         (Dictionary_2_ButtonStyle_Styles_ButtonStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).buttonStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::ButtonStyleDef>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_7.monitor = (MonitorData *)pLVar18->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 0;
    while (cVar19 = func_?(), cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_7,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ButtonStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_01 = TypeInfo__Styles->static_fields->buttonStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_01 == (Dictionary_2_ButtonStyle_Styles_ButtonStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[ButtonStyle,System::Object]::
      Dictionary_2_ButtonStyle_System_Object__Add
                ((Dictionary_2_ButtonStyle_System_Object_ *)this_01,
                 (ButtonStyle__Enum)unaff_ESI[10].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>__Add_ButtonStyle__Styles__ButtonStyleDef_
                );
    }
    iVar20 = 0;
    iStack_14 = 0;
    unaff_ESI = (Object *)0x0;
    *piStack_15 = 0x68;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ButtonStyleDef>__Dispose__
                   );
    if (*piStack_15 == 0x68) {
      iVar20 = -1;
      iStack_14 = -1;
    }
    this_02 = (this->fields).textStyles;
    if (this_02 == (List_1_Styles_TextStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                           MethodInfo__System__Collections__Generic__List<Styles::TextStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->textStylesDictionary =
         (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).textStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::TextStyleDef>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_8.monitor = (MonitorData *)pLVar18->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 2;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_8,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TextStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_03 = TypeInfo__Styles->static_fields->textStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_03 == (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TextStyle,System::Object]::
      Dictionary_2_TextStyle_System_Object__Add
                ((Dictionary_2_TextStyle_System_Object_ *)this_03,
                 (TextStyle__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__Add_TextStyle__Styles__TextStyleDef_
                );
    }
    iVar21 = iVar20 + 1;
    piStack_15[iVar21] = 0xc6;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar21;
    func_?(&CStack_8,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TextStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar21 != -1) && (piStack_15[iVar21] == 0xc6)) && (-1 < iVar21)) {
      iVar21 = iVar20;
      iStack_14 = iVar20;
    }
    this_04 = (this->fields).colorStyles;
    if (this_04 == (List_1_Styles_ColorStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                           MethodInfo__System__Collections__Generic__List<Styles::ColorStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->colorStylesDictionary =
         (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).colorStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::ColorStyleDef>__GetEnumerator__
                       );
    CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_9.monitor = (MonitorData *)pLVar18->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_9.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 4;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_9,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ColorStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_05 = TypeInfo__Styles->static_fields->colorStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_05 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[ColorStyle,System::Object]::
      Dictionary_2_ColorStyle_System_Object__Add
                ((Dictionary_2_ColorStyle_System_Object_ *)this_05,
                 (ColorStyle__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__Add_ColorStyle__Styles__ColorStyleDef_
                );
    }
    iVar20 = iVar21 + 1;
    piStack_15[iVar20] = 0x128;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar20;
    func_?(&CStack_9,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ColorStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar20 != -1) && (piStack_15[iVar20] == 0x128)) && (-1 < iVar20)) {
      iVar20 = iVar21;
      iStack_14 = iVar21;
    }
    this_06 = (this->fields).teamIconStyles;
    if (this_06 == (List_1_Styles_TeamIconStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_06,
                           MethodInfo__System__Collections__Generic__List<Styles::TeamIconStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->teamIconStylesDictionary =
         (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).teamIconStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::TeamIconStyleDef>__GetEnumerator__
                       );
    CStack_10.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_10.monitor = (MonitorData *)pLVar18->next;
    CStack_10.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_10.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 6;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_10,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TeamIconStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_07 = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_07 == (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_07,
                 (MVTeam__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__Add_MV__WorldObject__MVTeam__Styles__TeamIconStyleDef_
                );
    }
    iVar21 = iVar20 + 1;
    piStack_15[iVar21] = 0x18a;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar21;
    func_?(&CStack_10,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TeamIconStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar21 != -1) && (piStack_15[iVar21] == 0x18a)) && (-1 < iVar21)) {
      iVar21 = iVar20;
      iStack_14 = iVar20;
    }
    this_08 = (this->fields).effectStyles;
    if (this_08 == (List_1_Styles_EffectStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_08,
                           MethodInfo__System__Collections__Generic__List<Styles::EffectStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->effectStylesDictionary =
         (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).effectStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::EffectStyleDef>__GetEnumerator__
                       );
    CStack_11.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_11.monitor = (MonitorData *)pLVar18->next;
    CStack_11.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_11.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 8;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_11,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::EffectStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_09 = TypeInfo__Styles->static_fields->effectStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_09 == (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[EffectStyle,System::Object]::
      Dictionary_2_EffectStyle_System_Object__Add
                ((Dictionary_2_EffectStyle_System_Object_ *)this_09,
                 (EffectStyle__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__Add_EffectStyle__Styles__EffectStyleDef_
                );
    }
    iVar20 = iVar21 + 1;
    piStack_15[iVar20] = 0x1ec;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar20;
    func_?(&CStack_11,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::EffectStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar20 != -1) && (piStack_15[iVar20] == 0x1ec)) && (-1 < iVar20)) {
      iVar20 = iVar21;
      iStack_14 = iVar21;
    }
    this_10 = (this->fields).soundStyles;
    if (this_10 == (List_1_Styles_SoundStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_10,
                           MethodInfo__System__Collections__Generic__List<Styles::SoundStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->soundStylesDictionary =
         (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).soundStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::SoundStyleDef>__GetEnumerator__
                       );
    CStack_12.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_12.monitor = (MonitorData *)pLVar18->next;
    CStack_12.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_12.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 10;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_12,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::SoundStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_11 = TypeInfo__Styles->static_fields->soundStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_11 == (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[SoundStyle,System::Object]::
      Dictionary_2_SoundStyle_System_Object__Add
                ((Dictionary_2_SoundStyle_System_Object_ *)this_11,
                 (SoundStyle__Enum)unaff_ESI[1].klass,(Object *)unaff_ESI[1].monitor,
                 MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__Add_SoundStyle__UnityEngine__AudioSource_
                );
    }
    iVar21 = iVar20 + 1;
    piStack_15[iVar21] = 0x253;
    uStack_1 = 0xffffffff;
    func_?(&CStack_12,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::SoundStyleDef>__Dispose__
                   );
    if (unaff_ESI == (Object *)0x0) {
      if (((iVar21 != -1) && (piStack_15[iVar21] == 0x253)) && (-1 < iVar21)) {
        iVar21 = iVar20;
      }
      this_12 = (this->fields).rarityStyles;
      if (this_12 != (List_1_RarityStylesDef_ *)0x0) {
        unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_12,
                               MethodInfo__System__Collections__Generic__List<RarityStylesDef>__get_Count__
                              );
        auStack_16._16_4_ =
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>
                            );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
        Object]::Dictionary_2_WinningConditionType_System_Object___ctor_3
                  ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
                   (int32_t)unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__Dictionary_int_
                  );
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary =
             (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)auStack_16._16_4_;
        pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).rarityStyles;
        if (pLVar17 != (List_1_UnityEngine_Color32_ *)0x0) {
          pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                              MethodInfo__System__Collections__Generic__List<RarityStylesDef>__GetEnumerator__
                             );
          CStack_13.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
          CStack_13.monitor = (MonitorData *)pLVar18->next;
          CStack_13.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver
          ;
          CStack_13.fields.syncRoot = (Object *)(pLVar18->current).rgba;
          uStack_1 = 0xc;
          while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
            unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  (&CStack_13,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RarityStylesDef>__get_Current__
                                  );
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            this_13 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
            if ((unaff_ESI == (Object *)0x0) ||
               (this_13 == (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::Object]
            ::Dictionary_2_AccessoryRarity_System_Object__Add
                      ((Dictionary_2_AccessoryRarity_System_Object_ *)this_13,
                       (AccessoryRarity__Enum)unaff_ESI[1].klass,unaff_ESI,
                       MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__Add_AccessoryRarity__RarityStylesDef_
                      );
          }
          piStack_15[iVar21 + 1] = 0x2b5;
          uStack_1 = 0xffffffff;
          func_?(&CStack_13,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RarityStylesDef>__Dispose__
                         );
          if (unaff_ESI == (Object *)0x0) {
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            TypeInfo__Styles->static_fields->isInitialized = 1;
            goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?(unaff_ESI,0,0);
code_?:
  func_?(unaff_ESI,0,0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* String ColorToHex(Color32) */

String * Assembly-CSharp.dll::Styles::Styles_ColorToHex(Color32 color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)func_?(&color,StringLiteral_X2,0);
  str1 = (String *)func_?((undefined1 *)((int)&color.rgba + 1),StringLiteral_X2,0);
  str2 = (String *)func_?((undefined1 *)((int)&color.rgba + 2),StringLiteral_X2,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,str2,(MethodInfo *)0x0);
  return pSVar1;
}


/* RarityStylesDef GetAccessoryColorsFromLevel(Int32) */

RarityStylesDef *
Assembly-CSharp.dll::Styles::Styles_GetAccessoryColorsFromLevel(int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__AccessoryRarity;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Enum);
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  key = AccessoryRarity__Enum_Common;
  if (this != (Array *)0x0) {
    for (; iVar1 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0),
        (int)key < iVar1; key = key + AccessoryRarity__Enum_Uncommon) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        level = (int32_t)TypeInfo__Styles;
        func_?();
      }
      pDVar2 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
      if ((pDVar2 == (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::
                   Object]::Dictionary_2_AccessoryRarity_System_Object__get_Item
                             ((Dictionary_2_AccessoryRarity_System_Object_ *)pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__get_Item_AccessoryRarity_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      if (level < (int)pOVar3[2].klass) {
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        pDVar2 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
        if (pDVar2 != (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0) {
          pRVar4 = (RarityStylesDef *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::
                   Object]::Dictionary_2_AccessoryRarity_System_Object__get_Item
                             ((Dictionary_2_AccessoryRarity_System_Object_ *)pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__get_Item_AccessoryRarity_
                             );
          return pRVar4;
        }
        goto code_?;
      }
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar2 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
    if (pDVar2 != (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0) {
      pRVar4 = (RarityStylesDef *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::
               Object]::Dictionary_2_AccessoryRarity_System_Object__get_Item
                         ((Dictionary_2_AccessoryRarity_System_Object_ *)pDVar2,
                          AccessoryRarity__Enum_Legendary,
                          MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__get_Item_AccessoryRarity_
                         );
      return pRVar4;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pRVar4 = (RarityStylesDef *)(*pcVar5)();
  return pRVar4;
}


/* RarityStylesDef GetAccessoryColorsFromPrice(Int32) */

RarityStylesDef *
Assembly-CSharp.dll::Styles::Styles_GetAccessoryColorsFromPrice(int32_t price,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__AccessoryRarity;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Enum);
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  key = AccessoryRarity__Enum_Common;
  if (this != (Array *)0x0) {
    for (; iVar1 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0),
        (int)key < iVar1; key = key + AccessoryRarity__Enum_Uncommon) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        price = (int32_t)TypeInfo__Styles;
        func_?();
      }
      pDVar2 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
      if ((pDVar2 == (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::
                   Object]::Dictionary_2_AccessoryRarity_System_Object__get_Item
                             ((Dictionary_2_AccessoryRarity_System_Object_ *)pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__get_Item_AccessoryRarity_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      if (price < (int)pOVar3[1].monitor) {
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        pDVar2 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
        if (pDVar2 != (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0) {
          pRVar4 = (RarityStylesDef *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::
                   Object]::Dictionary_2_AccessoryRarity_System_Object__get_Item
                             ((Dictionary_2_AccessoryRarity_System_Object_ *)pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__get_Item_AccessoryRarity_
                             );
          return pRVar4;
        }
        goto code_?;
      }
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar2 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
    if (pDVar2 != (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0) {
      pRVar4 = (RarityStylesDef *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::
               Object]::Dictionary_2_AccessoryRarity_System_Object__get_Item
                         ((Dictionary_2_AccessoryRarity_System_Object_ *)pDVar2,
                          AccessoryRarity__Enum_Legendary,
                          MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__get_Item_AccessoryRarity_
                         );
      return pRVar4;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pRVar4 = (RarityStylesDef *)(*pcVar5)();
  return pRVar4;
}


/* Color GetColor(ColorStyle) */

Color * Assembly-CSharp.dll::Styles::Styles_GetColor
                  (Color *__return_storage_ptr__,ColorStyle__Enum colorStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__Styles->static_fields->colorStylesDictionary;
    if (this != (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ColorStyle,System::Object]::
               Dictionary_2_ColorStyle_System_Object__get_Item
                         ((Dictionary_2_ColorStyle_System_Object_ *)this,colorStyle,
                          MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                         );
      if (pOVar2 != (Object *)0x0) {
        pOVar3 = pOVar2[2].klass;
        pMVar4 = pOVar2[2].monitor;
        pOVar5 = pOVar2[3].klass;
        __return_storage_ptr__->r = (float)pOVar2[1].monitor;
        __return_storage_ptr__->g = (float)pOVar3;
        __return_storage_ptr__->b = (float)pMVar4;
        __return_storage_ptr__->a = (float)pOVar5;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar6 = (code *)swi(3);
    pCVar7 = (Color *)(*pcVar6)();
    return pCVar7;
  }
  pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_magenta
                      ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar8 = pCVar7->g;
  fVar9 = pCVar7->b;
  fVar10 = pCVar7->a;
  __return_storage_ptr__->r = pCVar7->r;
  __return_storage_ptr__->g = fVar8;
  __return_storage_ptr__->b = fVar9;
  __return_storage_ptr__->a = fVar10;
  return __return_storage_ptr__;
}


/* Color GetTeamColor(MVTeam, Boolean) */

Color * Assembly-CSharp.dll::Styles::Styles_GetTeamColor
                  (Color *__return_storage_ptr__,MVTeam__Enum team,bool darkTeam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_magenta
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar3 = pCVar2->g;
    fVar4 = pCVar2->b;
    fVar5 = pCVar2->a;
    __return_storage_ptr__->r = pCVar2->r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  if (darkTeam == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this == (MVNetworkGame *)0x0) ||
       (pSVar6 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this,(MethodInfo *)0x0), pSVar6 == (SkyParam *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    pLVar7 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)pSVar6,(MethodInfo *)0x0);
    if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                        );
    if (1 < (int)pOVar8) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = TypeInfo__Styles->static_fields->colorStylesDictionary;
      this_00 = TypeInfo__Styles->static_fields->teamToColorStyle;
      goto code_?;
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = TypeInfo__Styles->static_fields->colorStylesDictionary;
    this_00 = TypeInfo__Styles->static_fields->teamToColorStyle;
code_?:
    if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)0x0) goto code_?;
    this = (MVNetworkGame *)0x5;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this == (MVNetworkGame *)0x0) ||
       (pSVar6 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this,(MethodInfo *)0x0), pSVar6 == (SkyParam *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    pLVar7 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)pSVar6,(MethodInfo *)0x0);
    if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                        );
    if ((int)pOVar8 < 2) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = TypeInfo__Styles->static_fields->colorStylesDictionary;
      this_00 = TypeInfo__Styles->static_fields->teamToDarkColorStyle;
      goto code_?;
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = TypeInfo__Styles->static_fields->colorStylesDictionary;
    this_00 = TypeInfo__Styles->static_fields->teamToDarkColorStyle;
code_?:
    if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)0x0) goto code_?;
  }
  pMVar9 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__get_Item_MV__WorldObject__MVTeam_
  ;
  key = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]
        ::Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__get_Item
                  (this_00,(MVTeam__Enum)this,method_00);
  if ((this_01 != (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) &&
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ColorStyle,System::Object]
                ::Dictionary_2_ColorStyle_System_Object__get_Item
                          ((Dictionary_2_ColorStyle_System_Object_ *)this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                          ), pOVar8 != (Object *)0x0)) {
    pOVar10 = pOVar8[2].klass;
    pMVar11 = pOVar8[2].monitor;
    pOVar12 = pOVar8[3].klass;
    pMVar9->methodPointer = (Il2CppMethodPointer)pOVar8[1].monitor;
    pMVar9->virtualMethodPointer = (Il2CppMethodPointer)pOVar10;
    pMVar9->invoker_method = (InvokerMethod)pMVar11;
    pMVar9->name = (char *)pOVar12;
    return (Color *)pMVar9;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pCVar2 = (Color *)(*pcVar13)();
  return pCVar2;
}


/* Boolean HandleUnInitalized() */

bool Assembly-CSharp.dll::Styles::Styles_HandleUnInitalized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  handle = TypeRef__Styles;
  if (TypeInfo__Styles->static_fields->isInitialized == 0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar1 = (Styles *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectOfType
                       (type,(MethodInfo *)0x0);
    if (pSVar1 == (Styles *)0x0) {
      this = (Styles *)0x0;
    }
    else {
      bVar2 = (TypeInfo__Styles->_1).naturalAligment;
      if (((pSVar1->klass->_1).naturalAligment < bVar2) ||
         ((pSVar1->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__Styles)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this = (Styles *)0x0;
      if (bVar3) {
        this = pSVar1;
      }
      if (this == (Styles *)0x0) {
        func_?(pSVar1,TypeInfo__Styles);
        goto code_?;
      }
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (this == (Styles *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        bVar4 = (*pcVar5)();
        return bVar4;
      }
      Styles_Initialize(this,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  return TypeInfo__Styles->static_fields->isInitialized;
}


/* Color HexToColor(String) */

Color * Assembly-CSharp.dll::Styles::Styles_HexToColor
                  (Color *__return_storage_ptr__,String *hex,MethodInfo *method)

{
  pSVar1 = hex;
  if (hex != (String *)0x0) {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(hex,0,2,(MethodInfo *)0x0);
    uVar3 = mscorlib.dll::System::Byte::Byte_Parse_1
                      (pSVar2,NumberStyles__Enum_HexNumber,(MethodInfo *)0x0);
    pIStack_4 = (InvokerMethod)CONCAT31(pIStack_4._1_3_,uVar3);
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar1,2,2,(MethodInfo *)0x0);
    uVar3 = mscorlib.dll::System::Byte::Byte_Parse_1
                      (pSVar2,NumberStyles__Enum_HexNumber,(MethodInfo *)0x0);
    pcStack_5 = (char *)CONCAT31(pcStack_5._1_3_,uVar3);
    pSVar1 = mscorlib.dll::System::String::String_Substring_1(pSVar1,4,2,(MethodInfo *)0x0);
    pcStack6 = "j";
    uVar3 = mscorlib.dll::System::Byte::Byte_Parse_1
                      (pSVar1,NumberStyles__Enum_HexNumber,(MethodInfo *)0x0);
    _uStack_8 = CONCAT31(uStack_7,uVar3);
    method = (MethodInfo *)&hex;
    pcStack6 = pcStack_5;
    pIStack8 = pIStack_4;
    hex = (String *)&UNK_?;
    func_?();
    hex = (String *)0x0;
    pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit_1
                       (&CStack_10,(Color32)0x0,method);
    fRam00000000 = pCVar9->r;
    fRam00000004 = pCVar9->g;
    fRam00000008 = pCVar9->b;
    fRam0000000c = pCVar9->a;
    return (Color *)0x0;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar11)();
  return pCVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Styles::Styles_Initialize(Styles *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff34;
  puVar5 = &stack0xffffff34;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  CStack_10.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_10.monitor = (MonitorData *)0x0;
  CStack_10.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_10.fields.syncRoot = (Object *)0x0;
  CStack_11.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_11.monitor = (MonitorData *)0x0;
  CStack_11.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_11.fields.syncRoot = (Object *)0x0;
  CStack_12.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_12.monitor = (MonitorData *)0x0;
  CStack_12.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_12.fields.syncRoot = (Object *)0x0;
  CStack_13.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_13.monitor = (MonitorData *)0x0;
  CStack_13.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_13.fields.syncRoot = (Object *)0x0;
  func_?();
  iStack_14 = -1;
  piStack_15 = (int *)&stack0xffffff34;
  puStack_4 = &stack0xffffff34;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_15 = (int *)&stack0xffffff34, puStack_4 = &stack0xffffff34,
     (TypeInfo__Styles->_1).cctor_started == 0)) {
    piStack_15 = (int *)&stack0xffffff34;
    puStack_4 = &stack0xffffff34;
    func_?(TypeInfo__Styles);
  }
  if (TypeInfo__Styles->static_fields->isInitialized != 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_00 = (this->fields).buttonStyles;
  if (this_00 == (List_1_Styles_ButtonStyleDef_ *)0x0) {
code_?:
    func_?(0);
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
code_?:
    func_?(unaff_ESI,0,0);
  }
  else {
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                           MethodInfo__System__Collections__Generic__List<Styles::ButtonStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->buttonStylesDictionary =
         (Dictionary_2_ButtonStyle_Styles_ButtonStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).buttonStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::ButtonStyleDef>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_7.monitor = (MonitorData *)pLVar18->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 0;
    while (cVar19 = func_?(), cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_7,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ButtonStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_01 = TypeInfo__Styles->static_fields->buttonStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_01 == (Dictionary_2_ButtonStyle_Styles_ButtonStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[ButtonStyle,System::Object]::
      Dictionary_2_ButtonStyle_System_Object__Add
                ((Dictionary_2_ButtonStyle_System_Object_ *)this_01,
                 (ButtonStyle__Enum)unaff_ESI[10].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>__Add_ButtonStyle__Styles__ButtonStyleDef_
                );
    }
    iVar20 = 0;
    iStack_14 = 0;
    unaff_ESI = (Object *)0x0;
    *piStack_15 = 0x68;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ButtonStyleDef>__Dispose__
                   );
    if (*piStack_15 == 0x68) {
      iVar20 = -1;
      iStack_14 = -1;
    }
    this_02 = (this->fields).textStyles;
    if (this_02 == (List_1_Styles_TextStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                           MethodInfo__System__Collections__Generic__List<Styles::TextStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->textStylesDictionary =
         (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).textStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::TextStyleDef>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_8.monitor = (MonitorData *)pLVar18->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 2;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_8,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TextStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_03 = TypeInfo__Styles->static_fields->textStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_03 == (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TextStyle,System::Object]::
      Dictionary_2_TextStyle_System_Object__Add
                ((Dictionary_2_TextStyle_System_Object_ *)this_03,
                 (TextStyle__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__Add_TextStyle__Styles__TextStyleDef_
                );
    }
    iVar21 = iVar20 + 1;
    piStack_15[iVar21] = 0xc6;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar21;
    func_?(&CStack_8,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TextStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar21 != -1) && (piStack_15[iVar21] == 0xc6)) && (-1 < iVar21)) {
      iVar21 = iVar20;
      iStack_14 = iVar20;
    }
    this_04 = (this->fields).colorStyles;
    if (this_04 == (List_1_Styles_ColorStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                           MethodInfo__System__Collections__Generic__List<Styles::ColorStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->colorStylesDictionary =
         (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).colorStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::ColorStyleDef>__GetEnumerator__
                       );
    CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_9.monitor = (MonitorData *)pLVar18->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_9.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 4;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_9,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ColorStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_05 = TypeInfo__Styles->static_fields->colorStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_05 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[ColorStyle,System::Object]::
      Dictionary_2_ColorStyle_System_Object__Add
                ((Dictionary_2_ColorStyle_System_Object_ *)this_05,
                 (ColorStyle__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__Add_ColorStyle__Styles__ColorStyleDef_
                );
    }
    iVar20 = iVar21 + 1;
    piStack_15[iVar20] = 0x128;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar20;
    func_?(&CStack_9,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::ColorStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar20 != -1) && (piStack_15[iVar20] == 0x128)) && (-1 < iVar20)) {
      iVar20 = iVar21;
      iStack_14 = iVar21;
    }
    this_06 = (this->fields).teamIconStyles;
    if (this_06 == (List_1_Styles_TeamIconStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_06,
                           MethodInfo__System__Collections__Generic__List<Styles::TeamIconStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->teamIconStylesDictionary =
         (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).teamIconStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::TeamIconStyleDef>__GetEnumerator__
                       );
    CStack_10.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_10.monitor = (MonitorData *)pLVar18->next;
    CStack_10.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_10.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 6;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_10,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TeamIconStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_07 = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_07 == (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_07,
                 (MVTeam__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__Add_MV__WorldObject__MVTeam__Styles__TeamIconStyleDef_
                );
    }
    iVar21 = iVar20 + 1;
    piStack_15[iVar21] = 0x18a;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar21;
    func_?(&CStack_10,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::TeamIconStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar21 != -1) && (piStack_15[iVar21] == 0x18a)) && (-1 < iVar21)) {
      iVar21 = iVar20;
      iStack_14 = iVar20;
    }
    this_08 = (this->fields).effectStyles;
    if (this_08 == (List_1_Styles_EffectStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_08,
                           MethodInfo__System__Collections__Generic__List<Styles::EffectStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->effectStylesDictionary =
         (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).effectStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::EffectStyleDef>__GetEnumerator__
                       );
    CStack_11.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_11.monitor = (MonitorData *)pLVar18->next;
    CStack_11.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_11.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 8;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_11,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::EffectStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_09 = TypeInfo__Styles->static_fields->effectStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_09 == (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[EffectStyle,System::Object]::
      Dictionary_2_EffectStyle_System_Object__Add
                ((Dictionary_2_EffectStyle_System_Object_ *)this_09,
                 (EffectStyle__Enum)unaff_ESI[1].klass,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__Add_EffectStyle__Styles__EffectStyleDef_
                );
    }
    iVar20 = iVar21 + 1;
    piStack_15[iVar20] = 0x1ec;
    uStack_1 = 0xffffffff;
    iStack_14 = iVar20;
    func_?(&CStack_11,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::EffectStyleDef>__Dispose__
                   );
    if (unaff_ESI != (Object *)0x0) goto code_?;
    if (((iVar20 != -1) && (piStack_15[iVar20] == 0x1ec)) && (-1 < iVar20)) {
      iVar20 = iVar21;
      iStack_14 = iVar21;
    }
    this_10 = (this->fields).soundStyles;
    if (this_10 == (List_1_Styles_SoundStyleDef_ *)0x0) goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_10,
                           MethodInfo__System__Collections__Generic__List<Styles::SoundStyleDef>__get_Count__
                          );
    auStack_16._16_4_ =
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
               (int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__Dictionary_int_
              );
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    TypeInfo__Styles->static_fields->soundStylesDictionary =
         (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)auStack_16._16_4_;
    pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).soundStyles;
    if (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                        MethodInfo__System__Collections__Generic__List<Styles::SoundStyleDef>__GetEnumerator__
                       );
    CStack_12.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
    CStack_12.monitor = (MonitorData *)pLVar18->next;
    CStack_12.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
    CStack_12.fields.syncRoot = (Object *)(pLVar18->current).rgba;
    uStack_1 = 10;
    while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_12,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::SoundStyleDef>__get_Current__
                            );
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      this_11 = TypeInfo__Styles->static_fields->soundStylesDictionary;
      if ((unaff_ESI == (Object *)0x0) ||
         (this_11 == (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[SoundStyle,System::Object]::
      Dictionary_2_SoundStyle_System_Object__Add
                ((Dictionary_2_SoundStyle_System_Object_ *)this_11,
                 (SoundStyle__Enum)unaff_ESI[1].klass,(Object *)unaff_ESI[1].monitor,
                 MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__Add_SoundStyle__UnityEngine__AudioSource_
                );
    }
    iVar21 = iVar20 + 1;
    piStack_15[iVar21] = 0x253;
    uStack_1 = 0xffffffff;
    func_?(&CStack_12,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Styles::SoundStyleDef>__Dispose__
                   );
    if (unaff_ESI == (Object *)0x0) {
      if (((iVar21 != -1) && (piStack_15[iVar21] == 0x253)) && (-1 < iVar21)) {
        iVar21 = iVar20;
      }
      this_12 = (this->fields).rarityStyles;
      if (this_12 != (List_1_RarityStylesDef_ *)0x0) {
        unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_12,
                               MethodInfo__System__Collections__Generic__List<RarityStylesDef>__get_Count__
                              );
        auStack_16._16_4_ =
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>
                            );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
        Object]::Dictionary_2_WinningConditionType_System_Object___ctor_3
                  ((Dictionary_2_WinningConditionType_System_Object_ *)auStack_16._16_4_,
                   (int32_t)unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__Dictionary_int_
                  );
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary =
             (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)auStack_16._16_4_;
        pLVar17 = (List_1_UnityEngine_Color32_ *)(this->fields).rarityStyles;
        if (pLVar17 != (List_1_UnityEngine_Color32_ *)0x0) {
          pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar17,
                              MethodInfo__System__Collections__Generic__List<RarityStylesDef>__GetEnumerator__
                             );
          CStack_13.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
          CStack_13.monitor = (MonitorData *)pLVar18->next;
          CStack_13.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver
          ;
          CStack_13.fields.syncRoot = (Object *)(pLVar18->current).rgba;
          uStack_1 = 0xc;
          while (cVar19 = func_?(), unaff_ESI = pOStack_6, cVar19 != '\0') {
            unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  (&CStack_13,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RarityStylesDef>__get_Current__
                                  );
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            this_13 = TypeInfo__Styles->static_fields->accessoryRarityColorsDictionary;
            if ((unaff_ESI == (Object *)0x0) ||
               (this_13 == (Dictionary_2_AccessoryRarity_RarityStylesDef_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[AccessoryRarity,System::Object]
            ::Dictionary_2_AccessoryRarity_System_Object__Add
                      ((Dictionary_2_AccessoryRarity_System_Object_ *)this_13,
                       (AccessoryRarity__Enum)unaff_ESI[1].klass,unaff_ESI,
                       MethodInfo__System__Collections__Generic__Dictionary<AccessoryRarity,_RarityStylesDef>__Add_AccessoryRarity__RarityStylesDef_
                      );
          }
          piStack_15[iVar21 + 1] = 0x2b5;
          uStack_1 = 0xffffffff;
          func_?(&CStack_13,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RarityStylesDef>__Dispose__
                         );
          if (unaff_ESI == (Object *)0x0) {
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            TypeInfo__Styles->static_fields->isInitialized = 1;
            goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?(unaff_ESI,0,0);
code_?:
  func_?(unaff_ESI,0,0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::Styles::Styles_OnDestroy(Styles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  TypeInfo__Styles->static_fields->buttonStylesDictionary =
       (Dictionary_2_ButtonStyle_Styles_ButtonStyleDef_ *)0x0;
  TypeInfo__Styles->static_fields->textStylesDictionary =
       (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)0x0;
  TypeInfo__Styles->static_fields->colorStylesDictionary =
       (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0;
  TypeInfo__Styles->static_fields->teamIconStylesDictionary =
       (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0;
  TypeInfo__Styles->static_fields->effectStylesDictionary =
       (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)0x0;
  TypeInfo__Styles->static_fields->soundStylesDictionary =
       (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)0x0;
  TypeInfo__Styles->static_fields->isInitialized = 0;
  return;
}


/* Void PlayUISound(SoundStyle) */

void Assembly-CSharp.dll::Styles::Styles_PlayUISound(SoundStyle__Enum soundStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (soundStyle == SoundStyle__Enum_NoSound) {
    return;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  this = TypeInfo__Styles->static_fields->soundStylesDictionary;
  if ((this != (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[SoundStyle,System::Object]::
               Dictionary_2_SoundStyle_System_Object__get_Item
                         ((Dictionary_2_SoundStyle_System_Object_ *)this,soundStyle,
                          MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__get_Item_SoundStyle_
                         ), pOVar1 != (Object *)0x0)) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      func_?(uVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(in_stack_4);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStyle(Button, ButtonStyle, ColorStyle, SoundStyle) */

void Assembly-CSharp.dll::Styles::Styles_SetStyle
               (Button *button,ButtonStyle__Enum buttonStyle,ColorStyle__Enum colorStyle,
               SoundStyle__Enum soundStyle,MethodInfo *method)

{
  auVar1._0_60_ = in_stack_2._0_60_;
  auVar1._60_4_ = unaff_EBX;
  auVar1._64_4_ = unaff_EBP;
  auVar3._60_8_ = auVar1._60_8_;
  auVar3._0_56_ = in_stack_2._0_56_;
  auVar3._56_4_ = unaff_ESI;
  auVar4._56_12_ = auVar3._56_12_;
  auVar4._0_52_ = in_stack_2._0_52_;
  auVar4._52_4_ = unaff_EDI;
  if (cRam_? == '\0') {
    auVar5._52_16_ = auVar4._52_16_;
    auVar5._0_48_ = in_stack_2._0_48_;
    auVar5._48_4_ = _UNK_?;
    auVar4._48_20_ = auVar5._48_20_;
    auVar4._0_44_ = in_stack_2._0_44_;
    auVar4._44_4_ = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  auVar6._52_16_ = auVar4._52_16_;
  auVar6._0_48_ = auVar4._0_48_;
  auVar6._48_4_ = TypeInfo__Styles___SetStyle_c__AnonStorey0;
  auVar7._48_20_ = auVar6._48_20_;
  auVar7._0_44_ = auVar4._0_44_;
  auVar7._44_4_ = &UNK_?;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,auVar7._48_4_);
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?();
  }
  bVar8 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?();
  }
  this = TypeInfo__Styles->static_fields->buttonStylesDictionary;
  if (((this != (Dictionary_2_ButtonStyle_Styles_ButtonStyleDef_ *)0x0) &&
      (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ButtonStyle,System::Object]
                ::Dictionary_2_ButtonStyle_System_Object__get_Item
                          ((Dictionary_2_ButtonStyle_System_Object_ *)this,buttonStyle,
                           MethodInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>__get_Item_ButtonStyle_
                          ), pOVar9 != (Object *)0x0)) && (button != (Button *)0x0)) {
    value.m_FadeDuration = pOVar9[9].monitor;
    value._0_68_ = *(undefined1 (*) [68])(pOVar9 + 1);
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
              ((Selectable *)button,value,(MethodInfo *)0x0);
    pIVar10 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)button,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pIVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      pIVar10 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                         ((Selectable *)button,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      Styles_SetStyle_2((Graphic *)pIVar10,colorStyle,(MethodInfo *)0x0);
    }
    if (soundStyle == SoundStyle__Enum_NoSound) {
      return;
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = TypeInfo__Styles->static_fields->soundStylesDictionary;
    if ((this_00 != (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)0x0) &&
       (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[SoundStyle,System::Object]
                 ::Dictionary_2_SoundStyle_System_Object__get_Item
                           ((Dictionary_2_SoundStyle_System_Object_ *)this_00,soundStyle,
                            MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__get_Item_SoundStyle_
                           ), this_01 != (ScaleAnimationBase *)0x0)) {
      (this_01->fields)._._._._.m_CachedPtr = pOVar9;
      this_02 = (UnityEvent *)
                HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                          ((HoverCraftMotor *)button,(MethodInfo *)0x0);
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this_01,MethodInfo__Styles___SetStyle_c__AnonStorey0____m__0__,
                 (MethodInfo *)0x0);
      if (this_02 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                  (this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetStyle(Text, TextStyle, ColorStyle) */

void Assembly-CSharp.dll::Styles::Styles_SetStyle_1
               (Text *text,TextStyle__Enum textStyle,ColorStyle__Enum colorStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  this = TypeInfo__Styles->static_fields->textStylesDictionary;
  if (((this != (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)0x0) &&
      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TextStyle,System::Object]::
                Dictionary_2_TextStyle_System_Object__get_Item
                          ((Dictionary_2_TextStyle_System_Object_ *)this,textStyle,
                           MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__get_Item_TextStyle_
                          ), pOVar2 != (Object *)0x0)) && (text != (Text *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_font
              (text,(Font *)pOVar2[1].monitor,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
              (text,(int32_t)pOVar2[2].klass,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontStyle
              (text,(FontStyle__Enum)pOVar2[2].monitor,(MethodInfo *)0x0);
    Styles_SetStyle_2((Graphic *)text,colorStyle,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetStyle(Graphic, ColorStyle) */

void Assembly-CSharp.dll::Styles::Styles_SetStyle_2
               (Graphic *graphic,ColorStyle__Enum colorStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  this = TypeInfo__Styles->static_fields->colorStylesDictionary;
  if (((this != (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) &&
      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ColorStyle,System::Object]
                ::Dictionary_2_ColorStyle_System_Object__get_Item
                          ((Dictionary_2_ColorStyle_System_Object_ *)this,colorStyle,
                           MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                          ), pOVar2 != (Object *)0x0)) && (graphic != (Graphic *)0x0)) {
    (*(code *)(graphic->klass->vtable).set_color.method)
              (graphic,pOVar2[1].monitor,pOVar2[2].klass,pOVar2[2].monitor);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetStyle(Graphic, MVTeam) */

void Assembly-CSharp.dll::Styles::Styles_SetStyle_3
               (Graphic *image,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  this_00 = TypeInfo__Styles->static_fields->teamToColorStyle;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
    Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__get_Item
              (this_00,team,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__get_Item_MV__WorldObject__MVTeam_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__Styles->static_fields->colorStylesDictionary;
    if (((this != (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) &&
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ColorStyle,System::
                  Object]::Dictionary_2_ColorStyle_System_Object__get_Item
                            ((Dictionary_2_ColorStyle_System_Object_ *)this,in_stack_3,
                             MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                            ), pOVar2 != (Object *)0x0)) && (in_stack_4 != (int *)0x0)) {
      pOStack5 = pOVar2[3].klass;
      (**(code **)(*in_stack_4 + 0x178))();
      return;
    }
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetStyle(Button, ButtonStyle, MVTeam, SoundStyle) */

void Assembly-CSharp.dll::Styles::Styles_SetStyle_4
               (Button *button,ButtonStyle__Enum buttonStyle,MVTeam__Enum team,
               SoundStyle__Enum soundStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?();
  }
  this = TypeInfo__Styles->static_fields->teamToColorStyle;
  if (this == (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
  Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__get_Item
            (this,team,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__get_Item_MV__WorldObject__MVTeam_
            );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Styles___SetStyle_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = TypeInfo__Styles->static_fields->buttonStylesDictionary;
    if (this_00 != (Dictionary_2_ButtonStyle_Styles_ButtonStyleDef_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[ButtonStyle,System::Object]::
      Dictionary_2_ButtonStyle_System_Object__get_Item
                ((Dictionary_2_ButtonStyle_System_Object_ *)this_00,in_stack_3,
                 MethodInfo__System__Collections__Generic__Dictionary<ButtonStyle,_Styles::ButtonStyleDef>__get_Item_ButtonStyle_
                );
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void SetStyle(EffectStyleObject, EffectStyle) */

void Assembly-CSharp.dll::Styles::Styles_SetStyle_5
               (EffectStyleObject *effectStyleObject,EffectStyle__Enum effectStyle,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  bVar1 = Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  this = TypeInfo__Styles->static_fields->effectStylesDictionary;
  if ((((this != (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EffectStyle,System::
                 Object]::Dictionary_2_EffectStyle_System_Object__get_Item
                           ((Dictionary_2_EffectStyle_System_Object_ *)this,effectStyle,
                            MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__get_Item_EffectStyle_
                           ), pOVar2 != (Object *)0x0)) &&
      (effectStyleObject != (EffectStyleObject *)0x0)) &&
     (pSVar3 = (Shadow *)(effectStyleObject->fields).shadow, pSVar3 != (Shadow *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pSVar3,*(bool *)&pOVar2[1].monitor,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
              (pSVar3,*(Color *)(pOVar2 + 2),(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
              (pSVar3,(Vector2)pOVar2[4],(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
              (pSVar3,*(bool *)&pOVar2[5].klass,(MethodInfo *)0x0);
    pSVar3 = (Shadow *)(effectStyleObject->fields).outline;
    if (pSVar3 != (Shadow *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pSVar3,*(bool *)((int)&pOVar2[5].klass + 1),(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
                (pSVar3,*(Color *)&pOVar2[5].monitor,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
                (pSVar3,*(Vector2 *)&pOVar2[7].monitor,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
                (pSVar3,*(bool *)&pOVar2[8].monitor,(MethodInfo *)0x0);
      this_00 = (effectStyleObject->fields).gradient;
      if (this_00 != (GradientEffect *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,*(bool *)((int)&pOVar2[8].monitor + 1),(MethodInfo *)0x0);
        pMVar4 = pOVar2[9].monitor;
        pOVar5 = pOVar2[10].klass;
        pMVar6 = pOVar2[10].monitor;
        (this_00->fields).top.r = (float)pOVar2[9].klass;
        (this_00->fields).top.g = (float)pMVar4;
        (this_00->fields).top.b = (float)pOVar5;
        (this_00->fields).top.a = (float)pMVar6;
        pMVar4 = pOVar2[0xb].monitor;
        pOVar5 = pOVar2[0xc].klass;
        pMVar6 = pOVar2[0xc].monitor;
        (this_00->fields).bottom.r = (float)pOVar2[0xb].klass;
        (this_00->fields).bottom.g = (float)pMVar4;
        (this_00->fields).bottom.b = (float)pOVar5;
        (this_00->fields).bottom.a = (float)pMVar6;
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TeamToSprite(Image, MVTeam) */

void Assembly-CSharp.dll::Styles::Styles_TeamToSprite
               (Image *image,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  this = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
  if (this != (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
             ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                       );
    if ((pOVar1 != (Object *)0x0) && (image != (Image *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                (image,(Sprite *)pOVar1[1].monitor,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Styles() */

void Assembly-CSharp.dll::Styles::Styles__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Dictionary__
            );
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
    Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
              (pDVar1,MVTeam__Enum_None,ColorStyle__Enum_TeamNone,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
    Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
              (pDVar1,MVTeam__Enum_Blue,ColorStyle__Enum_TeamBlue,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
    Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
              (pDVar1,MVTeam__Enum_Red,ColorStyle__Enum_TeamRed,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
    Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
              (pDVar1,MVTeam__Enum_Green,ColorStyle__Enum_TeamGreen,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
    Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
              (pDVar1,MVTeam__Enum_Yellow,ColorStyle__Enum_TeamYellow,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
              );
    TypeInfo__Styles->static_fields->teamToColorStyle = pDVar1;
    pDVar1 = (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Dictionary__
              );
    if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
      Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
                (pDVar1,MVTeam__Enum_None,ColorStyle__Enum_TeamNoneDark,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
      Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
                (pDVar1,MVTeam__Enum_Blue,ColorStyle__Enum_TeamBlueDark,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
      Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
                (pDVar1,MVTeam__Enum_Red,ColorStyle__Enum_TeamRedDark,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
      Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
                (pDVar1,MVTeam__Enum_Green,ColorStyle__Enum_TeamGreenDark,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,ColorStyle]::
      Dictionary_2_MV_WorldObject_MVTeam_ColorStyle__Add
                (pDVar1,MVTeam__Enum_Yellow,ColorStyle__Enum_TeamYellowDark,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__Add_MV__WorldObject__MVTeam__ColorStyle_
                );
      TypeInfo__Styles->static_fields->teamToDarkColorStyle = pDVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Styles() */

void Assembly-CSharp.dll::Styles::Styles__ctor(Styles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Styles::ButtonStyleDef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Styles::ButtonStyleDef>__List__);
  (this->fields).buttonStyles = (List_1_Styles_ButtonStyleDef_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Styles::TextStyleDef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Styles::TextStyleDef>__List__);
  (this->fields).textStyles = (List_1_Styles_TextStyleDef_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Styles::ColorStyleDef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Styles::ColorStyleDef>__List__);
  (this->fields).colorStyles = (List_1_Styles_ColorStyleDef_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Styles::TeamIconStyleDef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Styles::TeamIconStyleDef>__List__
            );
  (this->fields).teamIconStyles = (List_1_Styles_TeamIconStyleDef_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Styles::EffectStyleDef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Styles::EffectStyleDef>__List__);
  (this->fields).effectStyles = (List_1_Styles_EffectStyleDef_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Styles::SoundStyleDef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Styles::SoundStyleDef>__List__);
  (this->fields).soundStyles = (List_1_Styles_SoundStyleDef_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<RarityStylesDef>__List__);
  (this->fields).rarityStyles = (List_1_RarityStylesDef_ *)pLVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

