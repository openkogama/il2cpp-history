
/* Void AddBoundingSphere() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_AddBoundingSphere(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  uVar2 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_4,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    fStack_6 = 0.0;
    fStack_7 = 0.0;
    fStack_8 = 0.0;
    fStack_9 = 0.0;
    func_?(&fStack_6,uVar5,pVVar3->z,0x3f800000,0);
    if (pBVar1->max_length <= uVar2) goto code_?;
    bVar10 = cRam_? == '\0';
    pBVar11 = pBVar1->vector + uVar2;
    (pBVar11->position).x = fStack_6;
    (pBVar11->position).y = fStack_7;
    (pBVar11->position).z = fStack_8;
    pBVar11->radius = fStack_9;
    if (bVar10) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    iVar12 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar10 = cRam_? == '\0';
    TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = iVar12 + 1;
    this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (bVar10) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (this != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSphereCount
                (this,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
code_?:
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = func_?();
  func_?(uVar15,uVar14,uVar13);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void ChangeDistances(Single, Camera) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_ChangeDistances
               (float newBaseDistance,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields;
  pCVar1->baseDistance = newBaseDistance;
  pSVar2 = pCVar1->sizes;
  if (pSVar2 != (Single__Array *)0x0) {
    pSVar2 = (Single__Array *)func_?(TypeInfo__System__Single,pSVar2->max_length);
    iVar3 = 0;
    while( true ) {
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if ((int)pSVar4->max_length <= iVar3) break;
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (TypeInfo__CullingApiWrapper->static_fields->sizes == (Single__Array *)0x0)
      goto code_?;
      fVar5 = (float10)func_?(iVar3);
      fVar6 = (float)fVar5;
      if (TypeInfo__CullingApiWrapper->static_fields->sizes == (Single__Array *)0x0)
      goto code_?;
      fVar5 = (float10)func_?(0);
      if (pSVar2 == (Single__Array *)0x0) goto code_?;
      func_?(iVar3,(fVar6 / (float)fVar5) * newBaseDistance);
      iVar3 = iVar3 + 1;
    }
    this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingDistances
                (this,pSVar2,(MethodInfo *)0x0);
      if (pSVar2 != (Single__Array *)0x0) {
        uVar7 = pSVar2->max_length;
        if (uVar7 <= uVar7 - 1) goto code_?;
        pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
        if (pSVar4 != (Single__Array *)0x0) {
          uVar8 = pSVar4->max_length;
          if (uVar8 <= uVar8 - 1) goto code_?;
          if (camera != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                      (camera,(pSVar4->vector[uVar8 - 1] + pSVar2->vector[uVar7 - 1]) *
                              _UNK_?,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DebugCullingEvent(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_DebugCullingEvent
               (CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,6);
  uStack_1 = func_?(&cullingGroupEvent,0);
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = 0;
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,uVar3);
    func_?(uVar4);
code_?:
    uVar3 = 0;
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,uVar3);
    func_?(uVar4);
code_?:
    uVar3 = 0;
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,uVar3);
    func_?(uVar4);
code_?:
    uVar3 = 0;
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,uVar3);
    func_?(uVar4);
code_?:
    uVar3 = 0;
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,uVar3);
    func_?(uVar4);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar5 == 0) goto code_?;
    }
    uVar3 = 0;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    uStack_6 = func_?(&cullingGroupEvent);
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    uVar3 = 0;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    uStack_7 = func_?(&cullingGroupEvent);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    uVar3 = 0;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    uStack_8 = func_?(&cullingGroupEvent);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_8);
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    uVar3 = 0;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    uStack_9 = func_?(&cullingGroupEvent);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_9);
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    uVar3 = 0;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar2;
    uStack_10 = func_?(&cullingGroupEvent);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_10);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (5 < args->max_length) {
        args->vector[5] = pOVar2;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                  (StringLiteral_cullingGroupEvent_u000AcurrentDistan,args,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    iVar5 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar5 != 0) goto code_?;
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DebugVisualize() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_DebugVisualize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField <= iVar1) {
      return;
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->spheres == (BoundingSphere__Array *)0x0) break;
    pVVar2 = (Vector3 *)func_?(iVar1);
    center = *pVVar2;
    if (TypeInfo__CullingApiWrapper->static_fields->spheres == (BoundingSphere__Array *)0x0) break;
    iVar3 = func_?(iVar1);
    UnityEngine.CoreModule.dll::UnityEngine::Gizmos::Gizmos_DrawWireSphere
              (center,*(float *)(iVar3 + 0xc),(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this = (LockCursorManager3DMode *)TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (LockCursorManager3DMode *)0x0) {
    LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
              (this,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
    this_00 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this_00 != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_Dispose
                (this_00,(MethodInfo *)0x0);
      TypeInfo__CullingApiWrapper->static_fields->cullingGroup = (CullingGroup *)0x0;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 GetDistance(Int32) */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_GetDistance
                  (int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_GetDistance
                      (this,index,(MethodInfo *)0x0);
    return iVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Int32 GetDistanceBand(Single) */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_GetDistanceBand
                  (float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    pSVar2 = TypeInfo__CullingApiWrapper->static_fields->sizes;
    if (pSVar2 == (Single__Array *)0x0) break;
    if ((int)pSVar2->max_length <= iVar1) {
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pSVar2 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar2 != (Single__Array *)0x0) {
        return pSVar2->max_length - 1;
      }
      break;
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->sizes == (Single__Array *)0x0) break;
    fVar3 = (float10)func_?(iVar1);
    if (radius < (float)fVar3) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void Init(Int32, Camera, Single) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Init
               (int32_t initialSphereCount,Camera *camera,float newBaseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (BoundingSphere__Array *)
           func_?(TypeInfo__UnityEngine__BoundingSphere,initialSphereCount + 1000);
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  TypeInfo__CullingApiWrapper->static_fields->spheres = pBVar1;
  pCVar2 = (CullingGroup *)func_?(TypeInfo__UnityEngine__CullingGroup);
  UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup__ctor
            (pCVar2,(MethodInfo *)0x0);
  TypeInfo__CullingApiWrapper->static_fields->cullingGroup = pCVar2;
  pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar2 != (CullingGroup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_set_targetCamera
              (pCVar2,camera,(MethodInfo *)0x0);
    if (camera != (Camera *)0x0) {
      distanceReferencePoint =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)camera,(MethodInfo *)0x0);
      CullingApiWrapper_SetDistanceReferencePoint(distanceReferencePoint,(MethodInfo *)0x0);
      newBaseDistance = (float)TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
      if ((CullingGroup *)newBaseDistance != (CullingGroup *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSpheres
                  ((CullingGroup *)newBaseDistance,
                   TypeInfo__CullingApiWrapper->static_fields->spheres,(MethodInfo *)0x0);
        pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        if (pCVar2 != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSphereCount
                    (pCVar2,0,(MethodInfo *)0x0);
          this = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                 TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
          if (this != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
            a = (Delegate *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (this,(MethodInfo *)0x0);
            if (TypeInfo__CullingApiWrapper->static_fields->__f__mg_cache0 ==
                (CullingGroup_StateChanged *)0x0) {
              this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              newBaseDistance = (float)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_00,(Object *)0x0,
                         MethodInfo__CullingApiWrapper__OnStateChanged_UnityEngine__CullingGroupEvent_
                         ,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
                func_?();
              }
              TypeInfo__CullingApiWrapper->static_fields->__f__mg_cache0 =
                   (CullingGroup_StateChanged *)this_00;
            }
            if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
              func_?();
            }
            pAVar3 = (Action_1_Boolean_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               (a,(Delegate *)
                                  TypeInfo__CullingApiWrapper->static_fields->__f__mg_cache0,
                                (MethodInfo *)0x0);
            if (this != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
              value = (Action_1_Boolean_ *)0x0;
              if (pAVar3 == (Action_1_Boolean_ *)0x0) {
code_?:
                LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                          ((LockCursorManager3DMode *)this,value,(MethodInfo *)0x0);
                TypeInfo__CullingApiWrapper->static_fields->baseDistance = newBaseDistance;
                CullingApiWrapper_ChangeDistances(newBaseDistance,camera,(MethodInfo *)0x0);
                return;
              }
              if ((CullingGroup_StateChanged__Class *)pAVar3->klass ==
                  TypeInfo__UnityEngine__CullingGroup__StateChanged) {
                value = pAVar3;
              }
              if (value != (Action_1_Boolean_ *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsVisible(Int32) */

bool Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_IsVisible
               (int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_IsVisible
                      (this,index,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_OnStateChanged
               (CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  iVar1 = func_?(&cullingGroupEvent,0);
  if (this != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
    pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this,iVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                       );
    uVar3 = cullingGroupEvent._4_4_;
    iVar1 = cullingGroupEvent.m_Index;
    if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
      pTVar4 = pTVar2->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pTVar4->_1).rank;
      uVar6._1_1_ = (pTVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pTVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__ICullingSubscriber) {
            ppMVar7 = &(&(pTVar2->klass->vtable).Equals)[pTVar4->interfaceOffsets[uVar5].offset].
                       method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)func_?(pTVar2,TypeInfo__ICullingSubscriber,0);
code_?:
      (*(code *)*ppMVar7)(pTVar2,iVar1,uVar3,ppMVar7[1]);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  pOStack_9 = (Object *)0xffffffff;
  piStack_10 = (int *)&stack0xffffff88;
  puStack_4 = &stack0xffffff88;
  this_00 = (List_1_UnityEngine_Color32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ICullingSubscriber>);
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            ((List_1_ThemeAttributes_ThemeAttribute_ *)this_00,0,
             MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__List_int_);
  pLStack_11 = this_00;
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (this == (Dictionary_2_System_Int32_ICullingSubscriber_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)auStack_12
               ,(Dictionary_2_WinningConditionType_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar13 = func_?(), cVar13 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff94,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__get_Current__
                            );
      item = func_?();
      if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,item,
                 MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__Add_ICullingSubscriber_
                );
    }
    iVar14 = 0;
    *piStack_10 = 0x4b;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_6 != 0) goto code_?;
    if (*piStack_10 == 0x4b) {
      iVar14 = -1;
    }
    if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_12 + 4),this_00,
                        MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar15->l;
    CStack_8.monitor = (MonitorData *)pLVar15->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar15->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar15->current).rgba;
    uStack_1 = 2;
    while (cVar13 = func_?(), iVar16 = iStack_6, cVar13 != '\0') {
      pOStack_9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__get_Current__
                             );
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      CullingApiWrapper_UnSubscribe((ICullingSubscriber *)pOStack_9,(MethodInfo *)0x0);
    }
    piStack_10[iVar14 + 1] = 0x85;
    uStack_1 = 0xffffffff;
    func_?();
    if (iVar16 != 0) goto code_?;
    if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__get_Count__
                       );
    if ((int)pOVar17 < 1) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    args = (Object__Array *)func_?();
    pLStack_11 = (List_1_UnityEngine_Color32_ *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__get_Count__
                           );
    pOVar17 = (Object *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar17 == (Object *)0x0) || (iVar14 = func_?(), iVar14 != 0)) {
      if (args->max_length != 0) {
        args->vector[0] = pOVar17;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarningFormat
                  (StringLiteral__0__subscribers_are_never_unsubs,args,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SetDistanceReferencePoint(Transform) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
               (Transform *distanceReferencePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetDistanceReferencePoint
              (this,distanceReferencePoint,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Subscribe(ICullingSubscriber) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Subscribe
               (ICullingSubscriber *iCullingGroupSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (pBVar1->max_length ==
      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    array = &TypeInfo__CullingApiWrapper->static_fields->spheres;
    pBVar1 = *array;
    if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Resize_161
              ((VoxelHit__Array **)array,pBVar1->max_length + 1000,
               void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
              );
    this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this == (CullingGroup *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSpheres
              (this,TypeInfo__CullingApiWrapper->static_fields->spheres,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this_00 = (Dictionary_2_System_Int32_System_Object_ *)
            TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this_00,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
               (Object *)iCullingGroupSubscriber,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
              );
    CullingApiWrapper_AddBoundingSphere((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (iCullingGroupSubscriber != (ICullingSubscriber *)0x0) {
      func_?(2,TypeInfo__ICullingSubscriber,iCullingGroupSubscriber,
                      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField +
                      -1);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnSubscribe(ICullingSubscriber) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_UnSubscribe
               (ICullingSubscriber *unSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (unSubscriber == (ICullingSubscriber *)0x0) {
code_?:
    func_?(0);
  }
  else {
    iVar1 = func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
    if (iVar1 < 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_unsubscribe_object_wit,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField < 2) {
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      iVar3 = CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar2,iVar3 + -1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                  );
code_?:
        func_?(2,TypeInfo__ICullingSubscriber,unSubscriber);
        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        CullingApiWrapper_set_NumBoundSpheres
                  (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField + -1
                   ,(MethodInfo *)0x0);
        if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
          return;
        }
        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        iVar3 = CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
        if (this != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSphereCount
                    (this,iVar3,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    uVar5 = func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
    if (pBVar4 == (BoundingSphere__Array *)0x0) goto code_?;
    pBVar6 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    iVar3 = CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
    if (pBVar6 == (BoundingSphere__Array *)0x0) goto code_?;
    if (iVar3 - 1U < pBVar6->max_length) {
      pBVar7 = pBVar6->vector + iVar3 + -1;
      fVar8 = (pBVar7->position).y;
      fVar9 = (pBVar7->position).z;
      fVar10 = pBVar7->radius;
      if (pBVar4->max_length <= uVar5) goto code_?;
      pBVar11 = pBVar4->vector + uVar5;
      (pBVar11->position).x = (pBVar7->position).x;
      (pBVar11->position).y = fVar8;
      (pBVar11->position).z = fVar9;
      pBVar11->radius = fVar10;
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      iVar3 = CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar2,iVar3 + -1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                          );
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
        iVar3 = func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                    (pDVar2,iVar3,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                    );
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
          iVar3 = CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
          if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      (pDVar2,iVar3 + -1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                      );
            uVar12 = func_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
            if (value != (TerrainUtility_TerrainMap *)0x0) {
              func_?(2,TypeInfo__ICullingSubscriber,value,uVar12);
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar12 = func_?(0);
  func_?(uVar12);
code_?:
  uVar12 = func_?(0);
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Single[] UpdateDistances(Single) */

Single__Array *
Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_UpdateDistances
          (float newBaseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields;
  pCVar1->baseDistance = newBaseDistance;
  pSVar2 = pCVar1->sizes;
  if (pSVar2 != (Single__Array *)0x0) {
    pSVar2 = (Single__Array *)func_?(TypeInfo__System__Single,pSVar2->max_length);
    iVar3 = 0;
    while( true ) {
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pSVar4 = TypeInfo__CullingApiWrapper->static_fields->sizes;
      if (pSVar4 == (Single__Array *)0x0) break;
      if ((int)pSVar4->max_length <= iVar3) {
        return pSVar2;
      }
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (TypeInfo__CullingApiWrapper->static_fields->sizes == (Single__Array *)0x0) break;
      fVar5 = (float10)func_?(iVar3);
      if (TypeInfo__CullingApiWrapper->static_fields->sizes == (Single__Array *)0x0) break;
      fVar6 = (float10)func_?(0);
      if (pSVar2 == (Single__Array *)0x0) break;
      func_?(iVar3,((float)fVar5 / (float)fVar6) * newBaseDistance);
      iVar3 = iVar3 + 1;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pSVar2 = (Single__Array *)(*pcVar7)();
  return pSVar2;
}


/* Boolean Visible(CullingGroupEvent, Int32) */

bool Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Visible
               (CullingGroupEvent cullingGroupEvent,int32_t distanceBandIndex,MethodInfo *method)

{
  cVar1 = func_?(&cullingGroupEvent,0);
  if (cVar1 != '\0') {
    return 0;
  }
  iVar2 = func_?(&cullingGroupEvent,0);
  if ((distanceBandIndex < iVar2) && (cVar1 = func_?(&cullingGroupEvent,0), cVar1 != '\0'))
  {
    return 0;
  }
  cVar1 = func_?(&cullingGroupEvent,0);
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = func_?(&cullingGroupEvent,0);
  if ((cVar1 != '\0') && (iVar2 = func_?(&cullingGroupEvent,0), iVar2 <= distanceBandIndex)
     ) {
    return 1;
  }
  cVar1 = func_?(&cullingGroupEvent,0);
  if (cVar1 != '\0') {
    iVar2 = func_?(&cullingGroupEvent,0);
    return iVar2 <= distanceBandIndex;
  }
  return 0;
}


/* CullingApiWrapper() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CullingApiWrapper->static_fields->baseDistance = 2.5;
  this = (Dictionary_2_System_Int32_ICullingSubscriber_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Dictionary__
            );
  TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers = this;
  array = (Single__Array *)func_?(TypeInfo__System__Single,7);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__field_59848606DBD5ED7AD50B791FE431D108ED6FE332_Field,(MethodInfo *)0x0
            );
  TypeInfo__CullingApiWrapper->static_fields->sizes = array;
  return;
}


/* Int32 get_NumBoundSpheres() */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  return TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
}


/* Camera get_TargetCamera() */

Camera * Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_get_TargetCamera
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this != (CullingGroup *)0x0) {
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_get_targetCamera
                       (this,(MethodInfo *)0x0);
    return pCVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pCVar1 = (Camera *)(*pcVar2)();
  return pCVar1;
}


/* Void set_NumBoundSpheres(Int32) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_set_NumBoundSpheres
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar1 != (CullingGroup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_set_targetCamera
              (pCVar1,value,(MethodInfo *)0x0);
    if (value != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                ((Component_1 *)value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
      if (pCVar1 != (CullingGroup *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::
        CullingGroup_SetDistanceReferencePoint(pCVar1,in_stack_2,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

