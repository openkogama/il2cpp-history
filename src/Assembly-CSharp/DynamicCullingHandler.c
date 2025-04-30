
/* Void ActivateCulling(GameObject, GameObject[], Boolean) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
               (DynamicCullingHandler *this,GameObject *cullingObject,
               GameObject__Array *cullingGroup,bool keepRootAlive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberDynamic);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Activating_Culling);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Activating_Culling,(MethodInfo *)0x0);
  fVar1 = (this->fields).cullingRadius;
  value = (CullingSubscriberDynamic *)func_?(TypeInfo__CullingSubscriberDynamic);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  (value->fields).overrideDistanceBandIndex = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  (value->fields).keepRootAlive = keepRootAlive;
  ppGVar2 = &(value->fields).root;
  (value->fields).cullingBandIndex = 3;
  *ppGVar2 = cullingObject;
  func_?(ppGVar2,cullingObject);
  ppGVar3 = &(value->fields).cullingGroup;
  *ppGVar3 = cullingGroup;
  func_?(ppGVar3,cullingGroup);
  if (cullingObject != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (cullingObject,(MethodInfo *)0x0);
    ppTVar5 = &(value->fields).rootTransform;
    *ppTVar5 = pTVar4;
    func_?(ppTVar5);
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)value,(MethodInfo *)0x0);
    uVar6 = (value->fields)._CullingIndex_k__BackingField;
    pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if ((pBVar7 != (BoundingSphere__Array *)0x0) && (*ppTVar5 != (Transform *)0x0)) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffec,*ppTVar5,(MethodInfo *)0x0);
      fVar9 = pVVar8->y;
      fVar10 = pVVar8->z;
      if (pBVar7->max_length <= uVar6) goto code_?;
      pBVar7->vector[uVar6].position.x = pVVar8->x;
      pBVar7->vector[uVar6].position.y = fVar9;
      pBVar7->vector[uVar6].position.z = fVar10;
      pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar7 != (BoundingSphere__Array *)0x0) {
        uVar6 = (value->fields)._CullingIndex_k__BackingField;
        if (uVar6 < pBVar7->max_length) {
          pBVar7->vector[uVar6].radius = fVar1;
          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)value,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
          (this->fields).cullingSubscriberDynamic = value;
          func_?(&this->fields);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DeActivateCulling() */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling
               (DynamicCullingHandler *this,MethodInfo *method)

{
  pDVar1 = &this->fields;
  unSubscriber = pDVar1->cullingSubscriberDynamic;
  if (unSubscriber != (CullingSubscriberDynamic *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      func_?(&TypeInfo__UpdateController);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_UnSubscribe
              ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_RemoveUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)unSubscriber,(MethodInfo *)0x0);
    pDVar1->cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
    func_?(pDVar1,0);
  }
  return;
}


/* Void UpdateCullingRadius(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_UpdateCullingRadius
               (DynamicCullingHandler *this,MVWorldObjectClient *objArg,
               ScaleChangedEventArgs *scaleArg,MethodInfo *method)

{
  fVar1 = (this->fields).cullingRadius;
  if (scaleArg != (ScaleChangedEventArgs *)0x0) {
    fVar2 = (scaleArg->fields).NewScale.y;
    pCVar3 = (this->fields).cullingSubscriberDynamic;
    if (pCVar3 != (CullingSubscriberDynamic *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar4 != (BoundingSphere__Array *)0x0) {
        uVar5 = (pCVar3->fields)._CullingIndex_k__BackingField;
        if (uVar5 < pBVar4->max_length) {
          pBVar4->vector[uVar5].radius = fVar2 * fVar1;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* DynamicCullingHandler(Single) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler__ctor
               (DynamicCullingHandler *this,float cullingRadius,MethodInfo *method)

{
  (this->fields).cullingRadius = 2.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).cullingRadius = cullingRadius;
  return;
}

