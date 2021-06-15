
/* Theme CreateTemporaryThemeVisualization(String) */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                  (ThemeRepository *this,String *identifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Preview_theme_created,(MethodInfo *)0x0);
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    pTVar2 = (Theme *)0x0;
  }
  else {
    pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    identifier = (String *)this;
    pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
    if ((pTVar1 == (ThemeWorldObject *)0x0) ||
       (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
    goto code_?;
    Theme::Theme_Deactivate(pTVar2,(MethodInfo *)0x0);
  }
  pXVar4 = (XpBoostParticlePreviewer *)
           ThemeRepository_GetThemePrefab(this,identifier,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar4,Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
  if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
    Theme::Theme_InitializeForPreview((Theme *)pXVar4,(MethodInfo *)0x0);
    Theme::Theme_Activate((Theme *)pXVar4,(MethodInfo *)0x0);
    return (Theme *)pXVar4;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pTVar2 = (Theme *)(*pcVar5)();
  return pTVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = (ThemeRepository *)0x0;
  return;
}


/* Void DestroyTemporary(Theme) */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_DestroyTemporary
               (ThemeRepository *this,Theme *theme,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Preview_theme_destroyed,(MethodInfo *)0x0);
  if (theme != (Theme *)0x0) {
    Theme::Theme_Deactivate(theme,(MethodInfo *)0x0);
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)theme,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    pTVar1 = ThemeRepository_get_CurrentTheme((ThemeRepository *)&UNK_?,(MethodInfo *)0x0);
    if (pTVar1 == (ThemeWorldObject *)0x0) {
      pTVar2 = (Theme *)0x0;
    }
    else {
      pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pTVar1 = ThemeRepository_get_CurrentTheme((ThemeRepository *)&UNK_?,(MethodInfo *)0x0);
      if ((pTVar1 == (ThemeWorldObject *)0x0) ||
         (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
      goto code_?;
      Theme::Theme_Activate(pTVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Theme GetThemePrefab(String) */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_GetThemePrefab
                  (ThemeRepository *this,String *identifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields).IdentifierToTheme;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,identifier,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_2
                          (identifier,StringLiteral__is_not_present_in_theme_reposit,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Theme_is_missing,(MethodInfo *)0x0);
      this_01 = (this->fields).themePrefabs;
      if (this_01 != (List_1_Theme_ *)0x0) {
        pTVar2 = (Theme *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01
                                     ,0,
                                     MethodInfo__System__Collections__Generic__List<Theme>__get_Item_int_
                                    );
        return pTVar2;
      }
    }
    else {
      this_02 = (this->fields).IdentifierToTheme;
      if (this_02 != (Dictionary_2_System_String_Theme_ *)0x0) {
        pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)this_02,(Type *)identifier,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__get_Item_System__String_
                           );
        return (Theme *)pPVar3;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pTVar2 = (Theme *)(*pcVar4)();
  return pTVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_Initialize
               (ThemeRepository *this,MethodInfo *method)

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
  if (cRam_? == '\0') {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = this;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).themePrefabs;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<Theme>__GetEnumerator__);
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_9._0_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__MoveNext__;
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x50;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      unaff_ESI = (Theme *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     (&CStack_6,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__get_Current__
                                     );
      this_01 = (this->fields).IdentifierToTheme;
      if ((unaff_ESI == (Theme *)0x0) ||
         (key = (String *)
                (*(code *)(unaff_ESI->klass->vtable).__unknown.method)
                          (unaff_ESI,(unaff_ESI->klass->vtable).__unknown_1.methodPtr),
         this_01 == (Dictionary_2_System_String_Theme_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                (this_01,key,unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__set_Item_System__String__Theme_
                );
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* ThemeRepository() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository__ctor
               (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_Theme_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_Theme>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__Dictionary__
            );
  (this->fields).IdentifierToTheme = this_00;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(in_stack_1,0.0,(MethodInfo *)this);
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    func_?();
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)();
  return;
}


/* ThemeWorldObject get_CurrentTheme() */

ThemeWorldObject *
Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentTheme
          (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (pMVar1,WorldObjectType__Enum_Theme,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if ((int)pOVar3 < 1) {
        return (ThemeWorldObject *)0x0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_Theme,(MethodInfo *)0x0);
        if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
          pTStack4 =
               (ThemeWorldObject *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,0,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
          if (pTStack4 == (ThemeWorldObject *)0x0) {
            return (ThemeWorldObject *)0x0;
          }
          bVar5 = (TypeInfo__ThemeWorldObject->_1).naturalAligment;
          if (((pTStack4->klass->_1).naturalAligment < bVar5) ||
             ((ThemeWorldObject__Class *)(pTStack4->klass->_1).typeHierarchy[bVar5 - 1] !=
              TypeInfo__ThemeWorldObject)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pTVar7 = (ThemeWorldObject *)0x0;
          if (bVar6) {
            pTVar7 = pTStack4;
          }
          pTStack8 = TypeInfo__ThemeWorldObject;
          if (pTVar7 != (ThemeWorldObject *)0x0) {
            return pTVar7;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pTStack4 = extraout_EDX;
  pTStack8 = unaff_ESI;
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pTVar7 = (ThemeWorldObject *)(*pcVar9)();
  return pTVar7;
}


/* String get_CurrentThemeIdentifier() */

String * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentThemeIdentifier
                   (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    return (String *)0x0;
  }
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_4,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_identifier,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pPVar6 = (Pool *)0x0;
    if (pPVar5 != (Pool *)0x0) {
      if ((String__Class *)pPVar5->klass == TypeInfo__System__String) {
        pPVar6 = pPVar5;
      }
      if (pPVar6 == (Pool *)0x0) {
        func_?();
        goto code_?;
      }
    }
    return (String *)pPVar6;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* Theme get_CurrentThemeVisualization() */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentThemeVisualization
                  (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    return (Theme *)0x0;
  }
  return (pTVar1->fields)._Visualization_k__BackingField;
}


/* Int32 get_CurrentThemeWoid() */

int32_t Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentThemeWoid
                  (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    return -1;
  }
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 != (ThemeWorldObject *)0x0) {
    return *(int32_t *)(in_stack_2 + 8);
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* ThemeRepository get_Instance() */

ThemeRepository *
Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
}


/* Boolean get_SkyboxOverride() */

bool Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_SkyboxOverride
               (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    x = (Theme *)0x0;
  }
  else {
    x = (pTVar1->fields)._Visualization_k__BackingField;
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  if (x != (Theme *)0x0) {
    return (x->fields).overrideSkyboxManager != 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_ThemeIsActive() */

bool Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_ThemeIsActive
               (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  return pTVar1 != (ThemeWorldObject *)0x0;
}


/* Void set_Instance(ThemeRepository) */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_set_Instance
               (ThemeRepository *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = value;
  return;
}

