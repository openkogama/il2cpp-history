
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_AddChild
               (MVBuildModeAvatar *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBody);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_AddChild((MVGroup *)this,child,(MethodInfo *)0x0);
  if (child == (MVWorldObjectClient *)0x0) {
    (this->fields).body = (MVBody *)0x0;
    pMVar1 = (MVWorldObjectClient *)0x0;
  }
  else {
    if (((child->klass->_1).naturalAligment < (TypeInfo__MVBody->_1).naturalAligment) ||
       ((MVBody__Class *)
        (child->klass->_1).typeHierarchy[(TypeInfo__MVBody->_1).naturalAligment - 1] !=
        TypeInfo__MVBody)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pMVar3 = (MVBody *)0x0;
    if (bVar2) {
      pMVar3 = (MVBody *)child;
    }
    (this->fields).body = pMVar3;
    if (((child->klass->_1).naturalAligment < (TypeInfo__MVBody->_1).naturalAligment) ||
       ((MVBody__Class *)
        (child->klass->_1).typeHierarchy[(TypeInfo__MVBody->_1).naturalAligment - 1] !=
        TypeInfo__MVBody)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pMVar1 = (MVWorldObjectClient *)0x0;
    if (bVar2) {
      pMVar1 = child;
    }
  }
  func_?(&(this->fields).body,pMVar1);
  pMVar3 = (this->fields).body;
  if ((pMVar3 != (MVBody *)0x0) && ((pMVar3->fields)._._._.gameObject != (GameObject *)0x0)) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_Destroy
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = *(Object_1 **)(in_stack_2 + 0x88);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pOVar1 = *(Object_1 **)(in_stack_2 + 0x88);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar1,(MethodInfo *)0x0);
  }
  if (*(char *)(in_stack_2 + 0xd4) == '\0') {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (pRVar5 = (pMVar4->fields).runtimeVariableNetworkManager,
       pRVar5 == (RuntimeVariableNetworkManager *)0x0)) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar3 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                      (pRVar5,*(int32_t *)(in_stack_2 + 8),(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pRVar5 = (pMVar4->fields).runtimeVariableNetworkManager,
         pRVar5 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                (pRVar5,*(int32_t *)(in_stack_2 + 8),(MethodInfo *)0x0);
    }
  }
  return;
}


/* LaserPointer InitLaser(Boolean) */

LaserPointer *
Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
          (MVBuildModeAvatar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&LaserPointer_MethodInfo__UnityEngine__GameObject__GetComponent<LaserPointer>__)
    ;
    cRam_? = '\x01';
  }
  this_00 = PickupItem::PickupItem_InstantiateAvatarItemType
                      (AvatarItemType__Enum_LaserPointer,-1,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pLVar1 = (LaserPointer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        LaserPointer_MethodInfo__UnityEngine__GameObject__GetComponent<LaserPointer>__
                       );
    if (pLVar1 != (LaserPointer *)0x0) {
      LaserPointer::LaserPointer_Initialize
                (pLVar1,0,*(MVRuntimeDataVariable **)(unaff_ESI + 0xe8),
                 *(Transform **)(unaff_ESI + 0x90),(MethodInfo *)0x0);
      LaserPointer::LaserPointer_OnEquip(pLVar1,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (LaserPointer *)(*pcVar2)();
  return pLVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_Initialize
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_AddLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,
             UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_UpdateControllerLateUpdate
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbManager;
  puVar2 = (undefined8 *)(*(code *)(this->klass->vtable).__unknown.method)();
  if (pAVar1 != (AvatarLimbManager *)0x0) {
    (*(code *)(pAVar1->klass->vtable).UpdateLimbRotations.method)
              (pAVar1,*puVar2,*(undefined4 *)(puVar2 + 1),
               (pAVar1->klass->vtable).__unknown.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVBuildModeAvatar(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar__ctor
               (MVBuildModeAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LimbRotationRuntimeData);
    func_?(&StringLiteral_pointRotationPitch);
    func_?(&StringLiteral_headRotationYaw);
    func_?(&StringLiteral_headRotationPitch);
    func_?(&StringLiteral_currentItem);
    func_?(&StringLiteral_emote);
    func_?(&StringLiteral_pointRotationYaw);
    cRam_? = '\x01';
  }
  pLVar1 = (LimbRotationRuntimeData *)func_?(TypeInfo__LimbRotationRuntimeData);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pLVar1,(MethodInfo *)0x0);
  (this->fields).limbRotationRuntimeData = pLVar1;
  func_?(&(this->fields).limbRotationRuntimeData,pLVar1);
  MVGroup::MVGroup__ctor((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  pMVar2 = (this->fields)._._.runtimeDataVariables;
  if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
    pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar2,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
    (this->fields).CurrentItem = pMVar3;
    func_?();
    pMVar2 = (this->fields)._._.runtimeDataVariables;
    pLVar1 = (this->fields).limbRotationRuntimeData;
    if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
      pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                         (pMVar2,StringLiteral_headRotationYaw,0.8,0,(MethodInfo *)0x0);
      if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
        (pLVar1->fields).HeadRotationYaw = pMVar3;
        func_?();
        pMVar2 = (this->fields)._._.runtimeDataVariables;
        pLVar1 = (this->fields).limbRotationRuntimeData;
        if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
          pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                             (pMVar2,StringLiteral_headRotationPitch,0.8,0,(MethodInfo *)0x0);
          if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
            (pLVar1->fields).HeadRotationPitch = pMVar3;
            func_?();
            pMVar2 = (this->fields)._._.runtimeDataVariables;
            pLVar1 = (this->fields).limbRotationRuntimeData;
            if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
              pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                 (pMVar2,StringLiteral_pointRotationYaw,0.8,0,(MethodInfo *)0x0);
              if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                (pLVar1->fields).PointRotationYaw = pMVar3;
                func_?();
                pMVar2 = (this->fields)._._.runtimeDataVariables;
                pLVar1 = (this->fields).limbRotationRuntimeData;
                if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
                  pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                     (pMVar2,StringLiteral_pointRotationPitch,0.8,0,
                                      (MethodInfo *)0x0);
                  if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                    (pLVar1->fields).PointRotationPitch = pMVar3;
                    func_?();
                    pMVar2 = (this->fields)._._.runtimeDataVariables;
                    pLVar1 = (this->fields).limbRotationRuntimeData;
                    if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
                      pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                         (pMVar2,StringLiteral_emote,0.5,0,(MethodInfo *)0x0);
                      if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                        (pLVar1->fields).Emote = pMVar3;
                        func_?();
                        return;
                      }
                    }
                  }
                }
              }
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

