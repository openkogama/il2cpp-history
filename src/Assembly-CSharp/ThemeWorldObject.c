
/* Void CommitSettings() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_CommitSettings
               (ThemeWorldObject *this,MethodInfo *method)

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
  worldObjectID = (this->fields)._._.id;
  woData = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  value = ThemeWorldObject_get_SettingsData(this,(MethodInfo *)0x0);
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)woData,StringLiteral_settings,(CrossPlatformInputManager_VirtualButton *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                (this_00,worldObjectID,woData,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Destroy
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    Theme::Theme_Deactivate(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._Visualization_k__BackingField;
    if (pTVar1 != (Theme *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Initialize
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  identifier = ThemeWorldObject_get_Identifier(this,(MethodInfo *)0x0);
  if (this_00 == (ThemeRepository *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pXVar2 = (XpBoostParticlePreviewer *)
           ThemeRepository::ThemeRepository_GetThemePrefab(this_00,identifier,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar2,Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
  (this->fields)._Visualization_k__BackingField = (Theme *)pXVar2;
  if (pXVar2 == (XpBoostParticlePreviewer *)0x0) goto code_?;
  Theme::Theme_Initialize((Theme *)pXVar2,(this->fields)._._.id,(MethodInfo *)0x0);
  pTVar3 = (this->fields)._Visualization_k__BackingField;
  if (pTVar3 == (Theme *)0x0) goto code_?;
  uVar4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCStack_5 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  func_?();
  if ((pTVar3->fields).overrideSkyboxManager != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    uVar6 = 0;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_02 == (SkyboxManager *)0x0) goto code_?;
    SkyboxManager::SkyboxManager_Disable(this_02,(MethodInfo *)0x0);
  }
  this_01 = (List_1_UnityEngine_Color32_ *)(pTVar3->fields).components;
  if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_8,this_01,
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    pCStack_5 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar7->l;
    while( true ) {
      cVar9 = func_?();
      if (cVar9 == '\0') {
        func_?(&pCStack_5,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                       );
        *unaff_FS_OFFSET = uVar4;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&pCStack_5,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                         );
      if (pOVar10 == (Object *)0x0) break;
      (*pOVar10->klass[1]._0.gc_desc)(pOVar10,pOVar10->klass[1]._0.name);
    }
  }
  uVar6 = 0;
code_?:
  func_?(uVar6);
  func_?(0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_OnDataUpdate
               (ThemeWorldObject *this,MethodInfo *method)

{
  this_00 = (this->fields)._Visualization_k__BackingField;
  if (this_00 != (Theme *)0x0) {
    Theme::Theme_Initialize(this_00,(this->fields)._._.id,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Reset
               (ThemeWorldObject *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    (*(code *)(pTVar1->klass->vtable).ThemeReset.method)(pTVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ThemeWorldObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject__ctor
               (ThemeWorldObject *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0);
  (this->fields)._.gameObject = pGVar1;
  if (pGVar1 != (GameObject *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    (this->fields)._.goId = iVar2;
    pGVar1 = (this->fields)._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      (this->fields)._.transform = pTVar3;
      pMVar4 = MVWorldObjectClient::MVWorldObjectClient_GetTransformData
                         ((MVWorldObjectClient_TransformData *)&stack0xffffffc4,
                          (MVWorldObjectClient *)this,data,(MethodInfo *)0x0);
      pTVar3 = (this->fields)._.transform;
      fVar5 = (pMVar4->rotation).x;
      uVar6 = (pMVar4->rotation).y;
      uVar7 = (pMVar4->rotation).z;
      fVar8 = (pMVar4->rotation).w;
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,pMVar4->position,(MethodInfo *)0x0);
        pTVar3 = (this->fields)._.transform;
        if (pTVar3 != (Transform *)0x0) {
          value.y = (float)uVar6;
          value.x = fVar5;
          value.z = (float)uVar7;
          value.w = fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar3,value,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                               (pGVar1,
                                UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                               );
            (this->fields)._.collider = (Collider *)pUVar9;
            MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
                      ((MVWorldObjectClient *)this,data,
                       (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* String get_Identifier() */

String * Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_Identifier
                   (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_00,(Type *)StringLiteral_identifier,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pPVar4 = (Pool *)0x0;
  if (pPVar3 != (Pool *)0x0) {
    if ((String__Class *)pPVar3->klass == TypeInfo__System__String) {
      pPVar4 = pPVar3;
    }
    if (pPVar4 == (Pool *)0x0) {
      func_?();
      goto code_?;
    }
  }
  return (String *)pPVar4;
}


/* Dictionary`2[System.Object,System.Object] get_SettingsData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_SettingsData
          (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) {
    func_?();
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_settings,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar3) {
      pDVar4 = pDVar1;
    }
    if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return pDVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* Boolean get_SkyboxOverride() */

bool Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_SkyboxOverride
               (ThemeWorldObject *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    return (pTVar1->fields).overrideSkyboxManager;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Theme get_Visualization() */

Theme * Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_Visualization
                  (ThemeWorldObject *this,MethodInfo *method)

{
  return (this->fields)._Visualization_k__BackingField;
}


/* Void set_Visualization(Theme) */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_set_Visualization
               (ThemeWorldObject *this,Theme *value,MethodInfo *method)

{
  (this->fields)._Visualization_k__BackingField = value;
  return;
}

