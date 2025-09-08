
/* Void Awake() */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_Awake
               (RTSceneGizmoCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                   );
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pCVar1 = (Camera *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                       );
    (this->fields)._camera = pCVar1;
    func_?(&(this->fields)._camera,pCVar1);
    pCVar1 = (this->fields)._camera;
    if (pCVar1 != (Camera *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pCVar1,(MethodInfo *)0x0);
      (this->fields)._transform = pTVar2;
      func_?(&(this->fields)._transform,pTVar2);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_Start
               (RTSceneGizmoCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._camera;
  if (pCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar1,0,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._camera;
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (pCVar1,CameraClearFlags__Enum_Depth,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._camera;
      if (pCVar1 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_renderingPath
                  (pCVar1,RenderingPath__Enum_Forward,(MethodInfo *)0x0);
        pCVar1 = (this->fields)._camera;
        if (pCVar1 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                    (pCVar1,(this->fields)._fieldOfView,(MethodInfo *)0x0);
          pCVar1 = (this->fields)._camera;
          if (pCVar1 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
                      (pCVar1,(this->fields)._orthoSize,(MethodInfo *)0x0);
            pCVar1 = (this->fields)._camera;
            if (pCVar1 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_allowHDR
                        (pCVar1,0,(MethodInfo *)0x0);
              if ((TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              x = (Object_1 *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                (x,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                if ((TypeInfo__RTG__MonoSingleton<RTG::RTCameraBackground>->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                this_00 = (RTCameraBackground *)
                          MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                    (
                                    MethodInfo__RTG__MonoSingleton<RTG::RTCameraBackground>__get_Get__
                                    );
                if (this_00 == (RTCameraBackground *)0x0) goto code_?;
                RTCameraBackground::RTCameraBackground_AddRenderIgnoreCamera
                          (this_00,(this->fields)._camera,(MethodInfo *)0x0);
              }
              if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor ==
                  0) {
                func_?();
              }
              this_01 = (RTSceneGrid *)
                        MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                  (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
              if (this_01 != (RTSceneGrid *)0x0) {
                RTSceneGrid::RTSceneGrid_AddRenderIgnoreCamera
                          (this_01,(this->fields)._camera,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_Update_SystemCall
               (RTSceneGizmoCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ISceneGizmoCamViewportUpdater);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._sceneCamera;
  if (pCVar1 != (Camera *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
      pTVar2 = (this->fields)._transform;
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar2,*pQVar3,(MethodInfo *)0x0);
        pTVar2 = (this->fields)._transform;
        if (pTVar2 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
          uVar5 = pVVar4->x;
          uVar6 = pVVar4->y;
          fVar7 = (this->fields)._offsetFromFocusPt;
          this_00 = (this->fields)._transform;
          if (this_00 != (Transform *)0x0) {
            value.y = (float)&stack0xffffffd8 - (float)uVar6 * fVar7;
            value.x = 4.2575998e-29 - (float)uVar5 * fVar7;
            value.z = (float)pTVar2 - pVVar4->z * fVar7;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_00,value,(MethodInfo *)0x0);
            pCVar1 = (this->fields)._sceneCamera;
            pCVar8 = (this->fields)._camera;
            if (pCVar1 != (Camera *)0x0) {
              value_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                                   (pCVar1,(MethodInfo *)0x0);
              if (pCVar8 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
                          (pCVar8,value_00,(MethodInfo *)0x0);
                pCVar1 = (this->fields)._sceneCamera;
                pCVar8 = (this->fields)._camera;
                if (pCVar1 != (Camera *)0x0) {
                  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                     (pCVar1,(MethodInfo *)0x0);
                  if (pCVar8 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                              (pCVar8,fVar7,(MethodInfo *)0x0);
                    if ((this->fields)._viewportUpdater != (ISceneGizmoCamViewportUpdater *)0x0) {
                      pIVar9 = (this->fields)._viewportUpdater;
                      uVar10 = 0;
                      pIVar11 = pIVar9->klass;
                      uVar12._0_1_ = (pIVar11->_1).rank;
                      uVar12._1_1_ = (pIVar11->_1).minimumAlignment;
                      pIStack13 = pIVar9;
                      if (uVar12 != 0) {
                        do {
                          if (pIVar11->interfaceOffsets[uVar10].interfaceType ==
                              (Il2CppClass *)TypeInfo__RTG__ISceneGizmoCamViewportUpdater) {
                            pIVar11 = pIVar9->klass;
                            iVar14 = pIVar11->interfaceOffsets[uVar10].offset;
                            pIStack15 = (&pIVar11[1]._0.image)[iVar14 * 2];
                            pIStack16 = (ISceneGizmoCamViewportUpdater__Class *)this;
                            (*(code *)(&pIVar11->vtable)[iVar14].Update.method)();
                            return;
                          }
                          uVar10 = uVar10 + 1;
                        } while (uVar10 < uVar12);
                      }
                      pIStack15 = (Il2CppImage *)0x0;
                      pIStack16 = TypeInfo__RTG__ISceneGizmoCamViewportUpdater;
                      puVar17 = (undefined4 *)func_?();
                      pIStack15 = (Il2CppImage *)puVar17[1];
                      pIStack16 = (ISceneGizmoCamViewportUpdater__Class *)this;
                      pIStack13 = pIVar9;
                      (*(code *)*puVar17)();
                    }
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
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* RTSceneGizmoCamera() */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera__ctor
               (RTSceneGizmoCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._lookAtPoint.x = (pVVar1->zeroVector).x;
  (this->fields)._lookAtPoint.y = fVar2;
  (this->fields)._lookAtPoint.z = fVar3;
  (this->fields)._fieldOfView = 60.0;
  (this->fields)._orthoSize = 5.0;
  (this->fields)._offsetFromFocusPt = 5.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_get_Look
                    (Vector3 *__return_storage_ptr__,RTSceneGizmoCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_get_Right
                    (Vector3 *__return_storage_ptr__,RTSceneGizmoCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_get_Up
                    (Vector3 *__return_storage_ptr__,RTSceneGizmoCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_WorldPosition() */

Vector3 * Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_get_WorldPosition
                    (Vector3 *__return_storage_ptr__,RTSceneGizmoCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_WorldRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_get_WorldRotation
          (Quaternion *__return_storage_ptr__,RTSceneGizmoCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pQVar1->y;
    fVar4 = pQVar1->z;
    fVar5 = pQVar1->w;
    __return_storage_ptr__->x = pQVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar6)();
  return pQVar1;
}


/* Void set_SceneCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_set_SceneCamera
               (RTSceneGizmoCamera *this,Camera *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pCVar2 = (this->fields)._camera;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pCVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields)._sceneCamera = value;
      func_?();
      pCVar2 = (this->fields)._sceneCamera;
      this_00 = (this->fields)._camera;
      if ((pCVar2 == (Camera *)0x0) ||
         (fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depth
                            (pCVar2,(MethodInfo *)0x0), this_00 == (Camera *)0x0)) {
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depth
                (this_00,fVar3 + _UNK_?,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void set_ViewportUpdater(ISceneGizmoCamViewportUpdater) */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_set_ViewportUpdater
               (RTSceneGizmoCamera *this,ISceneGizmoCamViewportUpdater *value,MethodInfo *method)

{
  if (value != (ISceneGizmoCamViewportUpdater *)0x0) {
    (this->fields)._viewportUpdater = value;
    func_?(&(this->fields)._viewportUpdater,value);
  }
  return;
}


/* Void set_WorldPosition(Vector3) */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_set_WorldPosition
               (RTSceneGizmoCamera *this,Vector3 value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_WorldRotation(Quaternion) */

void Assembly-CSharp.dll::RTG::RTSceneGizmoCamera::RTSceneGizmoCamera_set_WorldRotation
               (RTSceneGizmoCamera *this,Quaternion value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

