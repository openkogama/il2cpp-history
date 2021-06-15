
/* Void Activate() */

void Assembly-CSharp.dll::Theme::Theme_Activate(Theme *this,MethodInfo *method)

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
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if ((this->fields).overrideSkyboxManager != 0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_7 = (undefined4 *)&stack0xffffffb8, puStack_4 = &stack0xffffffb8,
       (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      func_?(TypeInfo__MVGameControllerBase);
    }
    uVar8 = 0;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_01 == (SkyboxManager *)0x0) goto code_?;
    SkyboxManager::SkyboxManager_Disable(this_01,(MethodInfo *)0x0);
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).components;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
    CStack_6.monitor = (MonitorData *)pLVar9->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_7 = 0x53;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                         );
      if (pOVar12 == (Object *)0x0) break;
      (*pOVar12->klass[1]._0.gc_desc)(pOVar12,pOVar12->klass[1]._0.name);
    }
  }
  uVar8 = 0;
code_?:
  func_?(uVar8);
  func_?(0,0,0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Add(ThemeComponent) */

void Assembly-CSharp.dll::Theme::Theme_Add(Theme *this,ThemeComponent *component,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).components;
  if (this_00 != (List_1_ThemeComponent_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)component,
               MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::Theme::Theme_Deactivate(Theme *this,MethodInfo *method)

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
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if ((this->fields).overrideSkyboxManager != 0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_7 = (undefined4 *)&stack0xffffffb8, puStack_4 = &stack0xffffffb8,
       (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      func_?(TypeInfo__MVGameControllerBase);
    }
    uVar8 = 0;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_01 == (SkyboxManager *)0x0) goto code_?;
    GameCoinStringRenderer::GameCoinStringRenderer_Start
              ((GameCoinStringRenderer *)this_01,(MethodInfo *)0x0);
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).components;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
    CStack_6.monitor = (MonitorData *)pLVar9->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_7 = 0x53;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                         );
      if (pOVar12 == (Object *)0x0) break;
      (*(code *)pOVar12->klass[1]._0.namespaze)(pOVar12,pOVar12->klass[1]._0.byval_arg.data.dummy);
    }
  }
  uVar8 = 0;
code_?:
  func_?(uVar8);
  func_?(0,0,0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::Theme::Theme_Initialize(Theme *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__ThemeSettings__SettingsSerialized);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>;
  this_01 = (List_1_ThemeAttributes_ThemeAttribute_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_01,8,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  (this_00->fields).state = (int32_t)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar1 = 
  WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
  ;
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef_2
                        (this_02,(int32_t)
                                 WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                         ,
                         WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                        );
    (this_00->fields).originalScale.z = (float)this_03;
    if (this_03 != (WorldObjectClientRef_1_ThemeWorldObject_ *)0x0) {
      this_04 = WorldObjectClientRef`1[MVRoundCube]::
                WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                          ((WorldObjectClientRef_1_MVRoundCube_ *)this_03,
                           MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__
                          );
      if (this_04 != (MVRoundCube *)0x0) {
        pDVar2 = ThemeWorldObject::ThemeWorldObject_get_SettingsData
                           ((ThemeWorldObject *)this_04,(MethodInfo *)0x0);
        (this_00->fields)._._._._.m_CachedPtr = pDVar2;
        pMVar1->parameters = (Il2CppType **)this_00;
        (**(code **)(pMVar1->methodPointer + 0x100))();
        if ((SettingsWrapper *)pMVar1->parameters != (SettingsWrapper *)0x0) {
          ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize
                    ((SettingsWrapper *)pMVar1->parameters,(MethodInfo *)0x0);
          (**(code **)(pMVar1->methodPointer + 0xf8))();
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeForPreview() */

void Assembly-CSharp.dll::Theme::Theme_InitializeForPreview(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (ScaleAnimationBase *)func_?(TypeInfo__ThemeSettings__SettingsPreview);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>;
  this_02 = (List_1_ThemeAttributes_ThemeAttribute_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_02,8,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  (this_01->fields).state = (int32_t)this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this_01->fields)._._._._.m_CachedPtr = this_03;
  pTVar1 = this->klass;
  (this->fields)._Settings_k__BackingField = (SettingsWrapper *)this_01;
  (*(code *)(pTVar1->vtable).__unknown_4.method)(this,(pTVar1->vtable).get_Controllers.methodPtr);
  this_00 = (this->fields)._Settings_k__BackingField;
  if (this_00 != (SettingsWrapper *)0x0) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).__unknown_3.method)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Theme::Theme_Initialize_1(Theme *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).__unknown_4.method)
            (this,(this->klass->vtable).get_Controllers.methodPtr);
  this_00 = (this->fields)._Settings_k__BackingField;
  if (this_00 != (SettingsWrapper *)0x0) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).__unknown_3.method)
              (this,(this->klass->vtable).__unknown_4.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Purchase(Int32) */

void Assembly-CSharp.dll::Theme::Theme_Purchase(Theme *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pSVar1 = (this->fields)._Settings_k__BackingField;
  if ((pSVar1 != (SettingsWrapper *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseSwitchTheme
              (this_00,id,(pSVar1->fields).settingsData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Theme() */

void Assembly-CSharp.dll::Theme::Theme__ctor(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ThemeComponent>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
  (this->fields).components = (List_1_ThemeComponent_ *)this_00;
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


/* List`1[UnityEngine.RectTransform] get_Controllers() */

List_1_UnityEngine_RectTransform_ *
Assembly-CSharp.dll::Theme::Theme_get_Controllers(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,0,
             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_);
  return (List_1_UnityEngine_RectTransform_ *)this_00;
}

