
/* Void AddBoundingSphere() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_AddBoundingSphere(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  uVar2 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  puStack_3 = (undefined *)0x0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::BoundingSphere::BoundingSphere__ctor
            ((BoundingSphere *)&puStack_3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector
             ,1.0,(MethodInfo *)0x0);
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    if (pBVar1->max_length <= uVar2) goto code_?;
    pBVar7 = pBVar1->vector + uVar2;
    (pBVar7->position).x = (float)puStack_3;
    (pBVar7->position).y = fVar4;
    (pBVar7->position).z = fVar5;
    pBVar7->radius = fVar6;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar8 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = iVar8 + 1;
    this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (this != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSphereCount
                (this,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ChangeDistances(Single, Camera) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_ChangeDistances
               (float newBaseDistance,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  TypeInfo__CullingApiWrapper->static_fields->baseDistance = newBaseDistance;
  pSVar1 = TypeInfo__CullingApiWrapper->static_fields->sizes;
  if (pSVar1 == (Single__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,pSVar1->max_length);
    uVar2 = 0;
    iVar3 = 0x10;
    while( true ) {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if ((int)pSVar4->max_length <= (int)uVar2) break;
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if ((pSVar4->max_length <= uVar2) || (pSVar4->max_length == 0)) goto code_?;
      if (pSVar1 == (Single__Array *)0x0) goto code_?;
      if (pSVar1->max_length <= uVar2) goto code_?;
      uVar2 = uVar2 + 1;
      *(float *)((int)pSVar1->vector + iVar3 + -0x10) =
           (*(float *)((int)pSVar4->vector + iVar3 + -0x10) / pSVar4->vector[0]) * newBaseDistance;
      iVar3 = iVar3 + 4;
    }
    this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this == (CullingGroup *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingDistances
              (this,pSVar1,(MethodInfo *)0x0);
    if (pSVar1 == (Single__Array *)0x0) goto code_?;
    if (pSVar1->max_length - 1 < pSVar1->max_length) {
      pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if (pSVar4->max_length - 1 < pSVar4->max_length) {
        if (camera != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                    (camera,(pSVar1->vector[pSVar1->max_length - 1] +
                            pSVar4->vector[pSVar4->max_length - 1]) * _UNK_?,
                     (MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DebugCullingEvent(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_DebugCullingEvent
               (CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_cullingGroupEvent_u000AcurrentDistan);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,6);
  iStack_1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
             CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0);
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    iStack_5 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
                CullingGroupEvent_get_previousDistance(&cullingGroupEvent,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    func_?(args->vector + 1,pOVar2);
    bStack_6 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
               CullingGroupEvent_get_hasBecomeVisible(&cullingGroupEvent,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    func_?(args->vector + 2,pOVar2);
    bStack_7 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
               CullingGroupEvent_get_hasBecomeInvisible(&cullingGroupEvent,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    func_?(args->vector + 3,pOVar2);
    bStack_8 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
               CullingGroupEvent_get_isVisible(&cullingGroupEvent,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar2;
    func_?(args->vector + 4,pOVar2);
    bStack_9 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
               CullingGroupEvent_get_wasVisible(&cullingGroupEvent,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_9);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (5 < args->max_length) {
      args->vector[5] = pOVar2;
      func_?(args->vector + 5,pOVar2);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                (StringLiteral_cullingGroupEvent_u000AcurrentDistan,args,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DebugVisualize() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_DebugVisualize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField <= (int)uVar1)
    {
      return;
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar3 == (BoundingSphere__Array *)0x0) goto code_?;
    if (pBVar3->max_length <= uVar1) break;
    center.z = *(float *)((int)&pBVar3->vector[0].position.z + iVar2);
    center._0_8_ = *(undefined8 *)((int)&pBVar3->vector[0].position.x + iVar2);
    UnityEngine.CoreModule.dll::UnityEngine::Gizmos::Gizmos_DrawWireSphere
              (center,*(float *)((int)&pBVar3->vector[0].radius + iVar2),(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x10;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
    return;
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (PostProcessEffectRenderer_1_System_Object_ *)
         TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (PostProcessEffectRenderer_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    PostProcessEffectRenderer`1[System::Object]::
    PostProcessEffectRenderer_1_System_Object__set_settings(this,(Object *)0x0,(MethodInfo *)0x0);
    this_00 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this_00 != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_Dispose
                (this_00,(MethodInfo *)0x0);
      TypeInfo__CullingApiWrapper->static_fields->cullingGroup = (CullingGroup *)0x0;
      func_?();
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 GetDistance(Int32) */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_GetDistance
                  (int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_GetDistance
                      (this,index,(MethodInfo *)0x0);
    return iVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Int32 GetDistanceBand(Single) */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_GetDistanceBand
                  (float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0x10;
  pCVar3 = TypeInfo__CullingApiWrapper;
  while( true ) {
    if ((pCVar3->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pCVar3);
      pCVar3 = TypeInfo__CullingApiWrapper;
    }
    pSVar4 = pCVar3->static_fields->sizes;
    if (pSVar4 == (Single__Array *)0x0) break;
    if ((int)pSVar4->max_length <= (int)uVar1) {
      if ((pCVar3->_1).cctor_finished_or_no_cctor == 0) {
        func_?(pCVar3);
        pCVar3 = TypeInfo__CullingApiWrapper;
      }
      pSVar4 = pCVar3->static_fields->sizes;
      if (pSVar4 != (Single__Array *)0x0) {
        return pSVar4->max_length - 1;
      }
      break;
    }
    if ((pCVar3->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pCVar3);
      pCVar3 = TypeInfo__CullingApiWrapper;
    }
    pSVar4 = pCVar3->static_fields->sizes;
    if (pSVar4 == (Single__Array *)0x0) break;
    if (pSVar4->max_length <= uVar1) goto code_?;
    if (radius < *(float *)((int)pSVar4->vector + iVar2 + -0x10)) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Init(Int32, Camera, Single) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Init
               (int32_t initialSphereCount,Camera *camera,float newBaseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__BoundingSphere);
    func_?(&MethodInfo__CullingApiWrapper__OnStateChanged_UnityEngine__CullingGroupEvent_);
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UnityEngine__CullingGroup);
    func_?(&TypeInfo__UnityEngine__CullingGroup__StateChanged);
    cRam_? = '\x01';
  }
  pBVar1 = (BoundingSphere__Array *)
           func_?(TypeInfo__UnityEngine__BoundingSphere,initialSphereCount + 1000);
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  TypeInfo__CullingApiWrapper->static_fields->spheres = pBVar1;
  func_?(&TypeInfo__CullingApiWrapper->static_fields->spheres,pBVar1);
  pCVar2 = (CullingGroup *)func_?(TypeInfo__UnityEngine__CullingGroup);
  if (pCVar2 != (CullingGroup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup__ctor
              (pCVar2,(MethodInfo *)0x0);
    TypeInfo__CullingApiWrapper->static_fields->cullingGroup = pCVar2;
    func_?(&TypeInfo__CullingApiWrapper->static_fields->cullingGroup,pCVar2);
    pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (pCVar2 != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_set_targetCamera
                (pCVar2,camera,(MethodInfo *)0x0);
      if (camera != (Camera *)0x0) {
        transform = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        if (pCVar2 != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::
          CullingGroup_SetDistanceReferencePoint(pCVar2,transform,(MethodInfo *)0x0);
          pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
          if (pCVar2 != (CullingGroup *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSpheres
                      (pCVar2,TypeInfo__CullingApiWrapper->static_fields->spheres,(MethodInfo *)0x0)
            ;
            pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
            if (pCVar2 != (CullingGroup *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::
              CullingGroup_SetBoundingSphereCount(pCVar2,0,(MethodInfo *)0x0);
              this = (ValueListBuilder_1_System_Object__1 *)
                     TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
              if (this != (ValueListBuilder_1_System_Object__1 *)0x0) {
                pDVar3 = (Delegate *)
                         mscorlib.dll::System::Collections::Generic::ValueListBuilder`1[System::
                         Object]::ValueListBuilder_1_System_Object__1_get_Length
                                   (this,(MethodInfo *)0x0);
                this_00 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
                if (this_00 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::
                  Vector2]::UnityAction_1_UnityEngine_Vector2___ctor
                            (this_00,(Object *)0x0,
                             MethodInfo__CullingApiWrapper__OnStateChanged_UnityEngine__CullingGroupEvent_
                             ,(MethodInfo *)0x0);
                  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     (pDVar3,(Delegate *)this_00,(MethodInfo *)0x0);
                  pDVar3 = (Delegate *)0x0;
                  if (pDVar4 == (Delegate *)0x0) {
code_?:
                    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    PostProcessEffectRenderer`1[System::Object]::
                    PostProcessEffectRenderer_1_System_Object__set_settings
                              ((PostProcessEffectRenderer_1_System_Object_ *)this,(Object *)pDVar3,
                               (MethodInfo *)0x0);
                    TypeInfo__CullingApiWrapper->static_fields->baseDistance = (float)pDVar3;
                    CullingApiWrapper_ChangeDistances
                              (TypeInfo__CullingApiWrapper->static_fields->baseDistance,camera,
                               (MethodInfo *)0x0);
                    return;
                  }
                  if ((CullingGroup_StateChanged__Class *)pDVar4->klass ==
                      TypeInfo__UnityEngine__CullingGroup__StateChanged) {
                    pDVar3 = pDVar4;
                  }
                  if (pDVar3 != (Delegate *)0x0) goto code_?;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsVisible(Int32) */

bool Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_IsVisible
               (int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_IsVisible
                      (this,index,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_OnStateChanged
               (CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                   );
    func_?(&TypeInfo__ICullingSubscriber);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this = (Dictionary_2_System_Int32Enum_System_Object_ *)
         TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  key = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                  ((uint8_t *)&cullingGroupEvent,(MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this,(Int32Enum__Enum)key,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      uVar2 = 0;
      uVar3 = (pOVar1->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (pOVar1->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__ICullingSubscriber) {
            pVVar4 = &(pOVar1->klass->vtable).Equals + pOVar1->klass->interfaceOffsets[uVar2].offset
            ;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)func_?(pOVar1,TypeInfo__ICullingSubscriber,0);
code_?:
      (*pVVar4->methodPtr)(pOVar1,pVVar4->method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup
               (MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ICullingSubscriber>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__Add_ICullingSubscriber_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ICullingSubscriber>);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral__0__subscribers_are_never_unsubs);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ICullingSubscriber>);
  if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
    func_?();
    func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
              (this_00,0,
               MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__List_int_);
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = (Dictionary_2_System_Object_System_Object_ *)
           TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
    if (this == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffc0,this,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__GetEnumerator__
                       );
    uVar6 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1 = 1;
    while( true ) {
      pMVar7 = SUB84(uVar6,4);
      bVar8 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                         &pOStack_4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__MoveNext__
                        );
      if (bVar8 == 0) break;
      uVar6._4_4_ = (int32_t)pMVar7;
      uVar6._0_4_ = (Object *)
                    MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__Add_ICullingSubscriber_
      ;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,
                 (Object *)
                 MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__Add_ICullingSubscriber_
                 ,
                 MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__Add_ICullingSubscriber_
                );
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&pOStack_4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__Dispose__
               ,pMVar7);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffc8,
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this_00,
               MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__GetEnumerator__);
    uStack_1 = 4;
    while( true ) {
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__MoveNext__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__MoveNext__
                        );
      if (bVar8 == 0) break;
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      CullingApiWrapper_UnSubscribe((ICullingSubscriber *)pMVar7,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffb0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__Dispose__
               ,in_stack_9);
    uStack_1 = 0xffffffff;
    if ((this_00->fields)._size < 1) goto code_?;
    args = (Object__Array *)func_?();
    pOVar10 = (Object *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar10 == (Object *)0x0) {
code_?:
      if (args->max_length != 0) {
        args->vector[0] = pOVar10;
        func_?();
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarningFormat
                  (StringLiteral__0__subscribers_are_never_unsubs,args,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    iVar11 = func_?();
    if (iVar11 != 0) goto code_?;
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetDistanceReferencePoint(Transform) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
               (Transform *distanceReferencePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetDistanceReferencePoint
              (this,distanceReferencePoint,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Subscribe(ICullingSubscriber) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Subscribe
               (ICullingSubscriber *iCullingGroupSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                   );
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                   );
    func_?(&TypeInfo__ICullingSubscriber);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (pBVar1->max_length ==
        TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar1 != (BoundingSphere__Array *)0x0) {
        mscorlib.dll::System::Array::Array_Resize
                  (&TypeInfo__CullingApiWrapper->static_fields->spheres,pBVar1->max_length + 1000,
                   void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                  );
        pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        if (pCVar2 != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSpheres
                    (pCVar2,TypeInfo__CullingApiWrapper->static_fields->spheres,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
code_?:
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      this = (Dictionary_2_System_Object_System_Object_ *)
             TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this,(Object *)
                        TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField
                   ,(Object *)iCullingGroupSubscriber,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                  );
        if (cRam_? == '\0') {
          BStack_3.position.x = (float)&TypeInfo__CullingApiWrapper;
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        uVar4 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        BStack_3.position.x = 0.0;
        BStack_3.position.y = 0.0;
        BStack_3.position.z = 0.0;
        BStack_3.radius = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::BoundingSphere::BoundingSphere__ctor
                  (&BStack_3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,
                   (MethodInfo *)0x0);
        if (pBVar1 != (BoundingSphere__Array *)0x0) {
          if (pBVar1->max_length <= uVar4) goto code_?;
          pBVar5 = pBVar1->vector + uVar4;
          (pBVar5->position).x = BStack_3.position.x;
          (pBVar5->position).y = BStack_3.position.y;
          (pBVar5->position).z = BStack_3.position.z;
          pBVar5->radius = BStack_3.radius;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          iVar6 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = iVar6 + 1;
          pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          if (pCVar2 != (CullingGroup *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::
            CullingGroup_SetBoundingSphereCount
                      (pCVar2,TypeInfo__CullingApiWrapper->static_fields->
                              _NumBoundSpheres_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__CullingApiWrapper);
              cRam_? = '\x01';
            }
            if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CullingApiWrapper);
            }
            if (iCullingGroupSubscriber != (ICullingSubscriber *)0x0) {
              func_?(2,TypeInfo__ICullingSubscriber,iCullingGroupSubscriber,
                              TypeInfo__CullingApiWrapper->static_fields->
                              _NumBoundSpheres_k__BackingField + -1);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UnSubscribe(ICullingSubscriber) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_UnSubscribe
               (ICullingSubscriber *unSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                   );
    func_?(&TypeInfo__ICullingSubscriber);
    func_?(&StringLiteral_Trying_to_unsubscribe_object_wit);
    cRam_? = '\x01';
  }
  if (unSubscriber != (ICullingSubscriber *)0x0) {
    iVar1 = func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
    if (iVar1 < 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_unsubscribe_object_wit,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField < 2) {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
               TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  (pDVar2,TypeInfo__CullingApiWrapper->static_fields->
                          _NumBoundSpheres_k__BackingField + -1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                  );
code_?:
        func_?(2,TypeInfo__ICullingSubscriber,unSubscriber);
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        iVar1 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = iVar1 + -1;
        if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
          return;
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        this_01 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        if (this_01 != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSphereCount
                    (this_01,TypeInfo__CullingApiWrapper->static_fields->
                             _NumBoundSpheres_k__BackingField,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      uVar4 = func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
      pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (pBVar5 != (BoundingSphere__Array *)0x0) {
        iVar1 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
        if (pBVar5->max_length <= iVar1 - 1U) goto code_?;
        if (pBVar3 != (BoundingSphere__Array *)0x0) {
          pBVar6 = pBVar5->vector + iVar1 + -1;
          fVar7 = (pBVar6->position).y;
          fVar8 = (pBVar6->position).z;
          fVar9 = pBVar6->radius;
          if (pBVar3->max_length <= uVar4) goto code_?;
          pBVar10 = pBVar3->vector + uVar4;
          (pBVar10->position).x = (pBVar6->position).x;
          (pBVar10->position).y = fVar7;
          (pBVar10->position).z = fVar8;
          pBVar10->radius = fVar9;
          this = (Dictionary_2_System_Int32Enum_System_Object_ *)
                 TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          if (this != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
            value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              (this,TypeInfo__CullingApiWrapper->static_fields->
                                    _NumBoundSpheres_k__BackingField - 1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                              );
            this_00 = (Dictionary_2_System_Object_System_Object_ *)
                      TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
            key = (Object *)func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        (this_00,key,value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                        );
              pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
                       TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__CullingApiWrapper);
                cRam_? = '\x01';
              }
              if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CullingApiWrapper);
              }
              if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          (pDVar2,TypeInfo__CullingApiWrapper->static_fields->
                                  _NumBoundSpheres_k__BackingField + -1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                          );
                uVar11 = func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
                if (value != (Object *)0x0) {
                  func_?(2,TypeInfo__ICullingSubscriber,value,uVar11);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Single[] UpdateDistances(Single) */

Single__Array *
Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_UpdateDistances
          (float newBaseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  TypeInfo__CullingApiWrapper->static_fields->baseDistance = newBaseDistance;
  pSVar1 = TypeInfo__CullingApiWrapper->static_fields->sizes;
  if (pSVar1 == (Single__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,pSVar1->max_length);
    uVar2 = 0;
    iVar3 = 0x10;
    while( true ) {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if ((int)pSVar4->max_length <= (int)uVar2) {
        return pSVar1;
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if ((pSVar4->max_length <= uVar2) || (pSVar4->max_length == 0)) break;
      if (pSVar1 == (Single__Array *)0x0) goto code_?;
      if (pSVar1->max_length <= uVar2) break;
      uVar2 = uVar2 + 1;
      *(float *)((int)pSVar1->vector + iVar3 + -0x10) =
           (*(float *)((int)pSVar4->vector + iVar3 + -0x10) / pSVar4->vector[0]) * newBaseDistance;
      iVar3 = iVar3 + 4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (Single__Array *)(*pcVar5)();
  return pSVar1;
}


/* Boolean Visible(CullingGroupEvent, Int32) */

bool Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Visible
               (CullingGroupEvent cullingGroupEvent,int32_t distanceBandIndex,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
          CullingGroupEvent_get_hasBecomeInvisible(&cullingGroupEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0);
    if (distanceBandIndex < iVar2) {
      cullingGroupEvent.m_Index = 0;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
              CullingGroupEvent_get_isVisible(&cullingGroupEvent,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return 0;
      }
    }
    cullingGroupEvent._4_4_ = &cullingGroupEvent;
    cullingGroupEvent.m_Index = (int32_t)&UNK_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_hasBecomeVisible
                      ((CullingGroupEvent *)cullingGroupEvent._4_4_,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_isVisible(&cullingGroupEvent,(MethodInfo *)0x0);
    if ((bVar1 != 0) &&
       (iVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
                CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0),
       iVar2 <= distanceBandIndex)) {
      return 1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_isVisible(&cullingGroupEvent,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
              CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0);
      return iVar2 <= distanceBandIndex;
    }
  }
  return 0;
}


/* CullingApiWrapper() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>);
    func_?(&TypeInfo__System__Single);
    func_?(&::C1C288957BE7B49A6A9994351091D0E2D605B5A5E77624DCE2A9491DF0AA7633_Field);
    cRam_? = '\x01';
  }
  TypeInfo__CullingApiWrapper->static_fields->baseDistance = 2.5;
  this = (Dictionary_2_System_Int32_ICullingSubscriber_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>
                        );
  if (this != (Dictionary_2_System_Int32_ICullingSubscriber_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Dictionary__
              );
    TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers = this;
    func_?(&TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers,this);
    array = (Single__Array *)func_?(TypeInfo__System__Single,7);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)array,
               _C1C288957BE7B49A6A9994351091D0E2D605B5A5E77624DCE2A9491DF0AA7633_Field,
               (MethodInfo *)0x0);
    TypeInfo__CullingApiWrapper->static_fields->sizes = array;
    func_?(&TypeInfo__CullingApiWrapper->static_fields->sizes,array);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_NumBoundSpheres() */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  return TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
}


/* Camera get_TargetCamera() */

Camera * Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_get_TargetCamera
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_get_targetCamera
                       (this,(MethodInfo *)0x0);
    return pCVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pCVar1 = (Camera *)(*pcVar4)();
  return pCVar1;
}


/* Void set_NumBoundSpheres(Int32) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_set_NumBoundSpheres
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
    TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = value;
    return;
  }
  TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = value;
  return;
}


/* Void set_TargetCamera(Camera) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_set_TargetCamera
               (Camera *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar1 != (CullingGroup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_set_targetCamera
              (pCVar1,value,(MethodInfo *)0x0);
    if (value != (Camera *)0x0) {
      transform = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
      if (pCVar1 != (CullingGroup *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::
        CullingGroup_SetDistanceReferencePoint(pCVar1,transform,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

