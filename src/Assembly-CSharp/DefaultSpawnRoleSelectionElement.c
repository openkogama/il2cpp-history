
/* Void Activate() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Activate
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if (pSVar1 == (SpawnRolePreviewer *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar1->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Deactivate
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if (pSVar1 == (SpawnRolePreviewer *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar1->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Int32, Int32, GamePassTier, MVTeam, UnityAction`1[System.Int32],
   UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Initialize
               (DefaultSpawnRoleSelectionElement *this,int32_t spawnRoleIndex,int32_t woId,
               GamePassTier__Enum tierRequirement,MVTeam__Enum team,
               UnityAction_1_System_Int32_ *onSelectedCallback,
               UnityAction_1_System_Int32_ *onActivatedCallback,MethodInfo *method)

{
  (this->fields).spawnRoleIndex = spawnRoleIndex;
  (this->fields).woId = woId;
  (this->fields).onSelectedCallback = onSelectedCallback;
  (this->fields).onActivatedCallback = onActivatedCallback;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnDestroy
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).spawnRolePreviewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnPointerUp
               (DefaultSpawnRoleSelectionElement *this,PointerEventData *eventData,
               MethodInfo *method)

{
  if ((this->fields).isDragging == 0) {
    (*(code *)(this->klass->vtable).Select.method)
              (this,(this->klass->vtable).OnSelctionHighlight.methodPtr);
  }
  return;
}


/* Void OnSelected() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnSelected
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  this_00 = (this->fields).spawnRolePreviewer;
  (this->fields).isSelected = 1;
  if ((this_00 == (SpawnRolePreviewer *)0x0) ||
     (SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey(this_00,0,(MethodInfo *)0x0),
     (this->fields).spawnRolePreviewer == (SpawnRolePreviewer *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_2 + 0x38);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38) !=
       (KogamaSettingNumericBase_1_System_Single_ *)0x0) &&
     (pBVar4 = (BoneAnimation *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38),
                          (MethodInfo *)0x0), pBVar4 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_set_FallBackWalkSpeed(pBVar4,0.7,(MethodInfo *)0x0);
    if (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38) !=
        (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      pBVar4 = (BoneAnimation *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38),
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_01 != (MVNetworkGame *)0x0) &&
         (iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                            (this_01,(MethodInfo *)0x0), pBVar4 != (BoneAnimation *)0x0)) {
        BoneAnimation::BoneAnimation_StartAnimation
                  (pBVar4,StringLiteral_Walk,iVar5 + -500,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnUnSelected() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnUnSelected
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  this_00 = (this->fields).spawnRolePreviewer;
  (this->fields).isSelected = 0;
  if ((this_00 == (SpawnRolePreviewer *)0x0) ||
     (SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey(this_00,1,(MethodInfo *)0x0),
     (this->fields).spawnRolePreviewer == (SpawnRolePreviewer *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_2 + 0x38);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (0,80000,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
    if ((*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_2 + 0x38) !=
         (KogamaSettingNumericBase_1_System_Single_ *)0x0) &&
       (this_02 = (BoneAnimation *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            (*(KogamaSettingNumericBase_1_System_Single_ **)
                              (in_stack_2 + 0x38),(MethodInfo *)0x0),
       this_02 != (BoneAnimation *)0x0)) {
      BoneAnimation::BoneAnimation_StartAnimation
                (this_02,StringLiteral_Idle,(iVar5 - iVar4) + -500,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Select
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isSelected == 0) {
    this_00 = (Action_1_UIPushOption_ *)(this->fields).onSelectedCallback;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(this->fields).spawnRoleIndex,
               MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
  }
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_SetupPreviewImage
               (DefaultSpawnRoleSelectionElement *this,GameObject *spawnRoleObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewerPrefab;
  (this->fields).spawnRolePreviewObject = spawnRoleObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar1;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)spawnRoleObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (XpBoostParticlePreviewer *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffd4,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar2,*pQVar3,(MethodInfo *)0x0);
      this_02 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        func_?();
        func_?();
        pSVar1 = (this->fields).spawnRolePreviewer;
        if (pSVar1 != (SpawnRolePreviewer *)0x0) {
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
                     (Vector3)ZEXT812(0xc0c000003fc00000),pTVar2,(Vector3)ZEXT812(0),
                     StringLiteral_SpawnRole,(this->fields).spawnRoleIndex,(GameObject *)this_01,
                     (MethodInfo *)0x0);
          pSVar1 = (this->fields).spawnRolePreviewer;
          this_00 = (this->fields).spawnRoleImage;
          if (pSVar1 != (SpawnRolePreviewer *)0x0) {
            value = (Texture *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pSVar1,
                               (MethodInfo *)0x0);
            if (this_00 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_IsDragging(Boolean) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_set_IsDragging
               (DefaultSpawnRoleSelectionElement *this,bool value,MethodInfo *method)

{
  (this->fields).isDragging = value;
  return;
}

