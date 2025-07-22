
/* Void AddRenderCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_AddRenderCamera
               (RTGizmosEngine *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._renderCameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    if (bVar2 == 0) {
      bVar2 = RTGizmosEngine_IsSceneGizmoCamera(this,camera,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pLVar1 = (this->fields)._renderCameras;
        if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,(Object *)camera,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                  );
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Gizmo CreateGizmo() */

Gizmo * Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateGizmo
                  (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  return this_00;
}


/* MoveGizmo CreateMoveGizmo() */

MoveGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateMoveGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__MoveGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pMVar1 = (MoveGizmo *)func_?(TypeInfo__RTG__MoveGizmo);
  MoveGizmo::MoveGizmo__ctor(pMVar1,(MethodInfo *)0x0);
  if (this_00 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pMVar1,(MethodInfo *)0x0);
    if (pMVar1 != (MoveGizmo *)0x0) {
      pMStack2 = (this->fields)._moveGizmoHotkeys;
      (pMVar1->fields)._sharedHotkeys = pMStack2;
      ppMStack3 = &(pMVar1->fields)._sharedHotkeys;
      func_?();
      MoveGizmo::MoveGizmo_set_SharedLookAndFeel2D
                (pMVar1,(this->fields)._moveGizmoLookAndFeel2D,(MethodInfo *)0x0);
      MoveGizmo::MoveGizmo_set_SharedLookAndFeel3D
                (pMVar1,(this->fields)._moveGizmoLookAndFeel3D,(MethodInfo *)0x0);
      MoveGizmo::MoveGizmo_set_SharedSettings2D
                (pMVar1,(this->fields)._moveGizmoSettings2D,(MethodInfo *)0x0);
      MoveGizmo::MoveGizmo_set_SharedSettings3D
                (pMVar1,(this->fields)._moveGizmoSettings3D,(MethodInfo *)0x0);
      return pMVar1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar1 = (MoveGizmo *)(*pcVar4)();
  return pMVar1;
}


/* ObjectTransformGizmo CreateObjectMoveGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectMoveGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__MoveGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  pGVar1 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(pGVar1,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,pGVar1,(MethodInfo *)0x0);
  this_00 = (MoveGizmo *)func_?(TypeInfo__RTG__MoveGizmo);
  MoveGizmo::MoveGizmo__ctor(this_00,(MethodInfo *)0x0);
  if (pGVar1 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(pGVar1,(IGizmoBehaviour *)this_00,(MethodInfo *)0x0);
    if (this_00 != (MoveGizmo *)0x0) {
      (this_00->fields)._sharedHotkeys = (this->fields)._moveGizmoHotkeys;
      func_?();
      MoveGizmo::MoveGizmo_set_SharedLookAndFeel2D
                (this_00,(this->fields)._moveGizmoLookAndFeel2D,(MethodInfo *)0x0);
      MoveGizmo::MoveGizmo_set_SharedLookAndFeel3D
                (this_00,(this->fields)._moveGizmoLookAndFeel3D,(MethodInfo *)0x0);
      MoveGizmo::MoveGizmo_set_SharedSettings2D
                (this_00,(this->fields)._moveGizmoSettings2D,(MethodInfo *)0x0);
      MoveGizmo::MoveGizmo_set_SharedSettings3D
                (this_00,(this->fields)._moveGizmoSettings3D,(MethodInfo *)0x0);
      pGVar1 = (this_00->fields)._._gizmo;
      if (pGVar1 != (Gizmo *)0x0) {
        pOVar2 = (ObjectTransformGizmo *)
                 Gizmo::Gizmo_AddBehaviour_1
                           (pGVar1,
                            RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                           );
        if (pOVar2 != (ObjectTransformGizmo *)0x0) {
          ObjectTransformGizmo::ObjectTransformGizmo_SetTransformChannelFlags
                    (pOVar2,ObjectTransformGizmo_Channels__Enum_Position,(MethodInfo *)0x0);
          (pOVar2->fields)._sharedSettings = (this->fields)._objectMoveGizmoSettings;
          func_?();
          return pOVar2;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (ObjectTransformGizmo *)(*pcVar3)();
  return pOVar2;
}


/* ObjectTransformGizmo CreateObjectRotationGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectRotationGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RotationGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  pGVar1 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(pGVar1,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,pGVar1,(MethodInfo *)0x0);
  this_00 = (RotationGizmo *)func_?(TypeInfo__RTG__RotationGizmo);
  RotationGizmo::RotationGizmo__ctor(this_00,(MethodInfo *)0x0);
  if (pGVar1 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(pGVar1,(IGizmoBehaviour *)this_00,(MethodInfo *)0x0);
    if (this_00 != (RotationGizmo *)0x0) {
      (this_00->fields)._sharedHotkeys = (this->fields)._rotationGizmoHotkeys;
      func_?();
      RotationGizmo::RotationGizmo_set_SharedLookAndFeel3D
                (this_00,(this->fields)._rotationGizmoLookAndFeel3D,(MethodInfo *)0x0);
      RotationGizmo::RotationGizmo_set_SharedSettings3D
                (this_00,(this->fields)._rotationGizmoSettings3D,(MethodInfo *)0x0);
      pGVar1 = (this_00->fields)._._gizmo;
      if (pGVar1 != (Gizmo *)0x0) {
        pOVar2 = (ObjectTransformGizmo *)
                 Gizmo::Gizmo_AddBehaviour_1
                           (pGVar1,
                            RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                           );
        if (pOVar2 != (ObjectTransformGizmo *)0x0) {
          ObjectTransformGizmo::ObjectTransformGizmo_SetTransformChannelFlags
                    (pOVar2,ObjectTransformGizmo_Channels__Enum_Rotation,(MethodInfo *)0x0);
          (pOVar2->fields)._sharedSettings = (this->fields)._objectRotationGizmoSettings;
          func_?();
          return pOVar2;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (ObjectTransformGizmo *)(*pcVar3)();
  return pOVar2;
}


/* ObjectTransformGizmo CreateObjectScaleGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectScaleGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ScaleGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  pGVar1 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(pGVar1,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,pGVar1,(MethodInfo *)0x0);
  this_00 = (ScaleGizmo *)func_?(TypeInfo__RTG__ScaleGizmo);
  ScaleGizmo::ScaleGizmo__ctor(this_00,(MethodInfo *)0x0);
  if (pGVar1 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(pGVar1,(IGizmoBehaviour *)this_00,(MethodInfo *)0x0);
    if (this_00 != (ScaleGizmo *)0x0) {
      ScaleGizmo::ScaleGizmo_set_SharedHotkeys
                (this_00,(this->fields)._scaleGizmoHotkeys,(MethodInfo *)0x0);
      ScaleGizmo::ScaleGizmo_set_SharedLookAndFeel3D
                (this_00,(this->fields)._scaleGizmoLookAndFeel3D,(MethodInfo *)0x0);
      ScaleGizmo::ScaleGizmo_set_SharedSettings3D
                (this_00,(this->fields)._scaleGizmoSettings3D,(MethodInfo *)0x0);
      pGVar1 = (this_00->fields)._._gizmo;
      if (pGVar1 != (Gizmo *)0x0) {
        this_01 = (RTFocusCamera *)
                  Gizmo::Gizmo_AddBehaviour_1
                            (pGVar1,
                             RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                            );
        if (this_01 != (RTFocusCamera *)0x0) {
          ObjectTransformGizmo::ObjectTransformGizmo_SetTransformChannelFlags
                    ((ObjectTransformGizmo *)this_01,ObjectTransformGizmo_Channels__Enum_Scale,
                     (MethodInfo *)0x0);
          ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                    ((ObjectTransformGizmo *)this_01,GizmoSpace__Enum_Local,(MethodInfo *)0x0);
          RTFocusCamera::RTFocusCamera_SetObjectVisibilityDirty(this_01,(MethodInfo *)0x0);
          (this_01->fields)._orbitSettings =
               (CameraOrbitSettings *)(this->fields)._objectScaleGizmoSettings;
          func_?();
          return (ObjectTransformGizmo *)this_01;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (ObjectTransformGizmo *)(*pcVar2)();
  return pOVar3;
}


/* ObjectTransformGizmo CreateObjectUniversalGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__UniversalGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  pGVar1 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(pGVar1,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,pGVar1,(MethodInfo *)0x0);
  this_00 = (UniversalGizmo *)func_?(TypeInfo__RTG__UniversalGizmo);
  UniversalGizmo::UniversalGizmo__ctor(this_00,(MethodInfo *)0x0);
  if (pGVar1 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(pGVar1,(IGizmoBehaviour *)this_00,(MethodInfo *)0x0);
    if (this_00 != (UniversalGizmo *)0x0) {
      (this_00->fields)._sharedHotkeys = (this->fields)._universalGizmoHotkeys;
      func_?();
      UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel2D
                (this_00,(this->fields)._universalGizmoLookAndFeel2D,(MethodInfo *)0x0);
      UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel3D
                (this_00,(this->fields)._universalGizmoLookAndFeel3D,(MethodInfo *)0x0);
      UniversalGizmo::UniversalGizmo_set_SharedSettings2D
                (this_00,(this->fields)._universalGizmoSettings2D,(MethodInfo *)0x0);
      UniversalGizmo::UniversalGizmo_set_SharedSettings3D
                (this_00,(this->fields)._universalGizmoSettings3D,(MethodInfo *)0x0);
      pGVar1 = (this_00->fields)._._gizmo;
      if (pGVar1 != (Gizmo *)0x0) {
        pOVar2 = (ObjectTransformGizmo *)
                 Gizmo::Gizmo_AddBehaviour_1
                           (pGVar1,
                            RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                           );
        if (pOVar2 != (ObjectTransformGizmo *)0x0) {
          ObjectTransformGizmo::ObjectTransformGizmo_SetTransformChannelFlags
                    (pOVar2,ObjectTransformGizmo_Channels__Enum_All,(MethodInfo *)0x0);
          (pOVar2->fields)._sharedSettings = (this->fields)._objectUniversalGizmoSettings;
          func_?();
          return pOVar2;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (ObjectTransformGizmo *)(*pcVar3)();
  return pOVar2;
}


/* RotationGizmo CreateRotationGizmo() */

RotationGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateRotationGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RotationGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pRVar1 = (RotationGizmo *)func_?(TypeInfo__RTG__RotationGizmo);
  RotationGizmo::RotationGizmo__ctor(pRVar1,(MethodInfo *)0x0);
  if (this_00 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pRVar1,(MethodInfo *)0x0);
    if (pRVar1 != (RotationGizmo *)0x0) {
      pRStack2 = (this->fields)._rotationGizmoHotkeys;
      (pRVar1->fields)._sharedHotkeys = pRStack2;
      ppRStack3 = &(pRVar1->fields)._sharedHotkeys;
      func_?();
      RotationGizmo::RotationGizmo_set_SharedLookAndFeel3D
                (pRVar1,(this->fields)._rotationGizmoLookAndFeel3D,(MethodInfo *)0x0);
      RotationGizmo::RotationGizmo_set_SharedSettings3D
                (pRVar1,(this->fields)._rotationGizmoSettings3D,(MethodInfo *)0x0);
      return pRVar1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pRVar1 = (RotationGizmo *)(*pcVar4)();
  return pRVar1;
}


/* ScaleGizmo CreateScaleGizmo() */

ScaleGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateScaleGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ScaleGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pSVar1 = (ScaleGizmo *)func_?(TypeInfo__RTG__ScaleGizmo);
  ScaleGizmo::ScaleGizmo__ctor(pSVar1,(MethodInfo *)0x0);
  if (this_00 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pSVar1,(MethodInfo *)0x0);
    if (pSVar1 != (ScaleGizmo *)0x0) {
      ScaleGizmo::ScaleGizmo_set_SharedHotkeys
                (pSVar1,(this->fields)._scaleGizmoHotkeys,(MethodInfo *)0x0);
      ScaleGizmo::ScaleGizmo_set_SharedLookAndFeel3D
                (pSVar1,(this->fields)._scaleGizmoLookAndFeel3D,(MethodInfo *)0x0);
      ScaleGizmo::ScaleGizmo_set_SharedSettings3D
                (pSVar1,(this->fields)._scaleGizmoSettings3D,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (ScaleGizmo *)(*pcVar2)();
  return pSVar1;
}


/* SceneGizmo CreateSceneGizmo(Camera) */

SceneGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateSceneGizmo
          (RTGizmosEngine *this,Camera *sceneCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&RTG__SceneGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SceneGizmo>__);
    func_?(&TypeInfo__RTG__Gizmo);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::ISceneGizmo>__Add_RTG__ISceneGizmo_
                   );
    cRam_? = '\x01';
  }
  pIVar1 = RTGizmosEngine_GetSceneGizmoByCamera(this,sceneCamera,(MethodInfo *)0x0);
  if (pIVar1 == (ISceneGizmo *)0x0) {
    this_02 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
    Gizmo::Gizmo__ctor(this_02,(MethodInfo *)0x0);
    RTGizmosEngine_RegisterGizmo(this,this_02,(MethodInfo *)0x0);
    if (this_02 != (Gizmo *)0x0) {
      pSVar2 = (SceneGizmo *)
               Gizmo::Gizmo_AddBehaviour_1
                         (this_02,
                          RTG__SceneGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SceneGizmo>__);
      if ((pSVar2 != (SceneGizmo *)0x0) &&
         (this_00 = (pSVar2->fields)._sceneGizmoCamera, this_00 != (RTSceneGizmoCamera *)0x0)) {
        RTSceneGizmoCamera::RTSceneGizmoCamera_set_SceneCamera
                  (this_00,(Camera *)&UNK_?,(MethodInfo *)0x0);
        (pSVar2->fields)._sharedLookAndFeel = (this->fields)._sceneGizmoLookAndFeel;
        func_?();
        this_01 = (List_1_System_Object_ *)(this->fields)._sceneGizmos;
        if (this_01 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_01,(Object *)pSVar2,
                     MethodInfo__System__Collections__Generic__List<RTG::ISceneGizmo>__Add_RTG__ISceneGizmo_
                    );
          return pSVar2;
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pSVar2 = (SceneGizmo *)(*pcVar3)();
    return pSVar2;
  }
  return (SceneGizmo *)0x0;
}


/* RTSceneGizmoCamera CreateSceneGizmoCamera(Camera, ISceneGizmoCamViewportUpdater) */

RTSceneGizmoCamera *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateSceneGizmoCamera
          (RTGizmosEngine *this,Camera *sceneCamera,ISceneGizmoCamViewportUpdater *viewportUpdater,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__RTSceneGizmoCamera_MethodInfo__UnityEngine__GameObject__AddComponent<RTG::RTSceneGizmoCamera>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__Add_RTG__RTSceneGizmoCamera_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeRef__RTG__RTSceneGizmoCamera);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__RTG__RTSceneGizmoCamera;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (pTVar1 != (Type *)0x0) {
    name = (String *)
           (*(code *)(pTVar1->klass->vtable).ToString.method)
                     (pTVar1,(pTVar1->klass->vtable).GetCustomAttributes.methodPtr);
    this_01 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this_01,name,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
      }
      this_03 = (Component *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
      if (this_03 != (Component *)0x0) {
        value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_03,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (this_02,value,(MethodInfo *)0x0);
          pRVar2 = (RTSceneGizmoCamera *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (this_01,
                              RTG__RTSceneGizmoCamera_MethodInfo__UnityEngine__GameObject__AddComponent<RTG::RTSceneGizmoCamera>__
                             );
          if (pRVar2 != (RTSceneGizmoCamera *)0x0) {
            if (viewportUpdater != (ISceneGizmoCamViewportUpdater *)0x0) {
              (pRVar2->fields)._viewportUpdater = viewportUpdater;
              func_?(&(pRVar2->fields)._viewportUpdater,viewportUpdater);
            }
            RTSceneGizmoCamera::RTSceneGizmoCamera_set_SceneCamera
                      (pRVar2,sceneCamera,(MethodInfo *)0x0);
            this_00 = (this->fields)._sceneGizmoCameras;
            if (this_00 != (List_1_RTG_RTSceneGizmoCamera_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)this_00,(Object *)pRVar2,
                         MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__Add_RTG__RTSceneGizmoCamera_
                        );
              return pRVar2;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pRVar2 = (RTSceneGizmoCamera *)(*pcVar3)();
  return pRVar2;
}


/* UniversalGizmo CreateUniversalGizmo() */

UniversalGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateUniversalGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__UniversalGizmo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Gizmo);
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)func_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pUVar1 = (UniversalGizmo *)func_?(TypeInfo__RTG__UniversalGizmo);
  UniversalGizmo::UniversalGizmo__ctor(pUVar1,(MethodInfo *)0x0);
  if (this_00 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pUVar1,(MethodInfo *)0x0);
    if (pUVar1 != (UniversalGizmo *)0x0) {
      pUStack2 = (this->fields)._universalGizmoHotkeys;
      (pUVar1->fields)._sharedHotkeys = pUStack2;
      ppUStack3 = &(pUVar1->fields)._sharedHotkeys;
      func_?();
      UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel2D
                (pUVar1,(this->fields)._universalGizmoLookAndFeel2D,(MethodInfo *)0x0);
      UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel3D
                (pUVar1,(this->fields)._universalGizmoLookAndFeel3D,(MethodInfo *)0x0);
      UniversalGizmo::UniversalGizmo_set_SharedSettings2D
                (pUVar1,(this->fields)._universalGizmoSettings2D,(MethodInfo *)0x0);
      UniversalGizmo::UniversalGizmo_set_SharedSettings3D
                (pUVar1,(this->fields)._universalGizmoSettings3D,(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pUVar1 = (UniversalGizmo *)(*pcVar4)();
  return pUVar1;
}


/* GizmoHandleHoverData GetGizmoHandleHoverData(Gizmo) */

GizmoHandleHoverData *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_GetGizmoHandleHoverData
          (RTGizmosEngine *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&
                    MethodInfo__RTG__RTGizmosEngine____c__DisplayClass114_0___GetGizmoHandleHoverData_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                   );
    func_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass114_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTGizmosEngine____c__DisplayClass114_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)gizmo;
    func_?(value + 1,gizmo);
    if ((Gizmo *)value[1].klass != (Gizmo *)0x0) {
      this_00 = Gizmo::Gizmo_get_FocusCamera((Gizmo *)value[1].klass,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
      }
      pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
        pVVar2 = (Vector3 *)
                 func_?(&stack0xffffffcc,6,TypeInfo__RTG__IInputDevice,pOVar1[2].klass,
                                 this_00);
        position = *pVVar2;
        VStack_3.x = pVVar2[1].x;
        VStack_3.y = pVVar2[1].y;
        VStack_3.z = pVVar2[1].z;
        if ((Gizmo *)value[1].klass != (Gizmo *)0x0) {
          uVar4 = pVVar2[1].z;
          hoverRay.m_Direction.z = (float)uVar4;
          hoverRay._0_20_ = *(undefined1 (*) [20])pVVar2;
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    Gizmo::Gizmo_GetAllHandlesHoverData
                              ((Gizmo *)value[1].klass,hoverRay,(MethodInfo *)0x0);
          if (this_00 != (Camera *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                               (&VStack_3,this_00,position,(MethodInfo *)0x0);
            pMVar5 = (MonitorData *)pVVar2->z;
            *(undefined8 *)&value[1].monitor = *(undefined8 *)pVVar2;
            value[2].monitor = pMVar5;
            this_02 = (Comparison_1_Object_ *)
                      func_?(TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
            mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                      (this_02,value,
                       MethodInfo__RTG__RTGizmosEngine____c__DisplayClass114_0___GetGizmoHandleHoverData_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                       ,(MethodInfo *)0x0);
            if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Sort_1
                        ((List_1_System_Object_ *)this_01,this_02,
                         MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                        );
              if ((this_01->fields)._size != 0) {
                RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_01,0,
                                   MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                                  );
                return (GizmoHandleHoverData *)RVar6;
              }
              return (GizmoHandleHoverData *)0x0;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pGVar8 = (GizmoHandleHoverData *)(*pcVar7)();
  return pGVar8;
}


/* ISceneGizmo GetSceneGizmoByCamera(Camera) */

ISceneGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_GetSceneGizmoByCamera
          (RTGizmosEngine *this,Camera *sceneCamera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::ISceneGizmo>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::ISceneGizmo>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::ISceneGizmo>__get_Current__
                   );
    func_?(&TypeInfo__RTG__ISceneGizmo);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::ISceneGizmo>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sceneGizmos;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::ISceneGizmo>__GetEnumerator__
                       );
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::ISceneGizmo>__MoveNext__
                        );
      pOVar10 = LStack_6._current;
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::ISceneGizmo>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (ISceneGizmo *)0x0;
      }
      RStack_11 = (RegexCharClass_SingleRange)LStack_6._current;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      iStack_12 = *(int *)LStack_6._current;
      uVar13 = 0;
      uVar14 = *(ushort *)(iStack_12 + 0xb6);
      uStack_15 = (uint)uVar14;
      if (uVar14 != 0) {
        do {
          if (*(ISceneGizmo__Class **)(*(int *)(iStack_12 + 0x58) + (uint)uVar13 * 8) ==
              TypeInfo__RTG__ISceneGizmo) {
            puVar16 = (undefined4 *)
                     (*(int *)LStack_6._current +
                     (*(int *)(*(int *)(*(int *)LStack_6._current + 0x58) + 4 + (uint)uVar13 * 8) +
                     0x19) * 8);
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
      }
      puVar16 = (undefined4 *)func_?(LStack_6._current,TypeInfo__RTG__ISceneGizmo,1);
code_?:
      method_00 = (RegexCharClass_SingleRange)pOVar10;
      x = (Object_1 *)(*(code *)*puVar16)(pOVar10,puVar16[1]);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)sceneCamera,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::ISceneGizmo>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return (ISceneGizmo *)(RegexCharClass_SingleRange)pOVar10;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pIVar18 = (ISceneGizmo *)(*pcVar17)();
  return pIVar18;
}


/* Boolean IsRenderCamera(Camera) */

bool Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_IsRenderCamera
               (RTGizmosEngine *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._renderCameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsSceneGizmoCamera(Camera) */

bool Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_IsSceneGizmoCamera
               (RTGizmosEngine *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__FindAll_System__Predicate<RTG::RTSceneGizmoCamera>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::RTSceneGizmoCamera>);
    func_?(&
                    MethodInfo__RTG__RTGizmosEngine____c__DisplayClass100_0___IsSceneGizmoCamera_b__0_RTG__RTSceneGizmoCamera_
                   );
    func_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass100_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTGizmosEngine____c__DisplayClass100_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)camera;
    func_?(value + 1,camera);
    this_00 = (this->fields)._sceneGizmoCameras;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::RTSceneGizmoCamera>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__RTGizmosEngine____c__DisplayClass100_0___IsSceneGizmoCamera_b__0_RTG__RTSceneGizmoCamera_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_RTSceneGizmoCamera_ *)0x0) {
      pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__FindAll_System__Predicate<RTG::RTSceneGizmoCamera>_
                         );
      if (pLVar1 != (List_1_System_Object_ *)0x0) {
        return (pLVar1->fields)._size != 0;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnGUI() */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_OnGUI
               (RTGizmosEngine *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._gizmos;
  (this->fields)._pipelineStage = 4;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__)
    ;
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                   ,unaff_EDI);
        (this->fields)._pipelineStage = 5;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      Gizmo::Gizmo_OnGUI_SystemCall((Gizmo *)LStack_6._current,(MethodInfo *)0x0);
    }
  }
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoDragEnd(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_OnGizmoDragEnd
               (RTGizmosEngine *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  (this->fields)._draggedGizmo = (Gizmo *)0x0;
  func_?(&(this->fields)._draggedGizmo,0);
  (this->fields)._justReleasedDrag = 1;
  return;
}


/* Void RegisterGizmo(Gizmo) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_RegisterGizmo
               (RTGizmosEngine *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Add_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._gizmos;
  if (this_00 != (List_1_RTG_Gizmo_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)gizmo,
               MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Add_RTG__Gizmo_);
    value = (GizmoPreDragBeginHandler *)func_?(TypeInfo__RTG__GizmoPreDragBeginHandler);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              ((EventHandler_1_Object_ *)value,(Object *)this,
               MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_,(MethodInfo *)0x0)
    ;
    if (gizmo != (Gizmo *)0x0) {
      Gizmo::Gizmo_add_PreDragBegin(gizmo,value,(MethodInfo *)0x0);
      value_00 = (GizmoPreDragEndHandler *)func_?(TypeInfo__RTG__GizmoPreDragEndHandler);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                ((EventHandler_1_Object_ *)value_00,(Object *)this,
                 MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_,(MethodInfo *)0x0)
      ;
      Gizmo::Gizmo_add_PreDragEnd(gizmo,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveRenderCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_RemoveRenderCamera
               (RTGizmosEngine *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._renderCameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)camera,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render_SystemCall(Camera) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_Render_SystemCall
               (RTGizmosEngine *this,Camera *renderCamera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::Gizmo>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__);
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Sort_System__Comparison<RTG::Gizmo>_
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List_System__Collections__Generic__IEnumerable<RTG::Gizmo>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
    func_?(&
                    MethodInfo__RTG__RTGizmosEngine____c__DisplayClass115_0___Render_SystemCall_b__0_RTG__Gizmo__RTG__Gizmo_
                   );
    func_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass115_0);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  (this->fields)._pipelineStage = 2;
  bVar7 = RTGizmosEngine_IsSceneGizmoCamera(this,renderCamera,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._renderCameras;
    if (this_00 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
    bVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)renderCamera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    if (bVar7 == 0) {
      (this->fields)._pipelineStage = 3;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  pGVar8 = (this->fields)._settings;
  if (pGVar8 != (GizmoEngineSettings *)0x0) {
    if ((pGVar8->fields)._enableGizmoSorting == 0) {
      worldFrustumPlanes =
           CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes(renderCamera,(MethodInfo *)0x0);
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._gizmos;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)auStack_10,this_01,
                            MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__
                           );
        RStack_11 = (RegexCharClass_SingleRange)&stack0xffffffb4;
        pOVar12 = (Object__Class *)pLVar9->_list;
        RVar13 = pLVar9->_current;
        iStack_14 = 0;
        uStack_1 = 4;
        while( true ) {
          bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                            );
          if (bVar7 == 0) break;
          if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
          Gizmo::Gizmo_Render_SystemCall
                    ((Gizmo *)RVar13,renderCamera,worldFrustumPlanes,(MethodInfo *)0x0);
        }
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                   ,(MethodInfo *)pOVar12);
        (this->fields)._pipelineStage = 3;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    else {
      LStack_15._current = (RegexCharClass_SingleRange)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)LStack_15._current,ExceptionArgument__Enum_obj,
                 (MethodInfo *)in_stack_6);
      if (cRam_? == '\0') {
        func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
        func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
        cRam_? = '\x01';
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
      }
      pOVar16 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
      if ((pOVar16 != (Object *)0x0) && ((Component *)pOVar16[2].monitor != (Component *)0x0)) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pOVar16[2].monitor,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)(auStack_10 + 4),this_02,(MethodInfo *)0x0);
          fVar18 = pVVar17->y;
          pOVar12 = (Object__Class *)pVVar17->z;
          if (LStack_15._current != (RegexCharClass_SingleRange)0x0) {
            ((Object *)((int)LStack_15._current + 8))->klass = (Object__Class *)pVVar17->x;
            ((Object *)((int)LStack_15._current + 8))->monitor = (MonitorData *)fVar18;
            ((Object *)((int)LStack_15._current + 0x10))->klass = pOVar12;
            collection = (this->fields)._gizmos;
            RVar13 = (RegexCharClass_SingleRange)func_?();
            RStack_11 = RVar13;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object___ctor_1
                      ((List_1_System_Object_ *)RVar13,(IEnumerable_1_System_Object_ *)collection,
                       MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List_System__Collections__Generic__IEnumerable<RTG::Gizmo>_
                      );
            RStack_11 = (RegexCharClass_SingleRange)func_?();
            mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                      ((Comparison_1_Object_ *)RStack_11,(Object *)LStack_15._current,
                       MethodInfo__RTG__RTGizmosEngine____c__DisplayClass115_0___Render_SystemCall_b__0_RTG__Gizmo__RTG__Gizmo_
                       ,(MethodInfo *)0x0);
            if (RVar13 != (RegexCharClass_SingleRange)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Sort_1
                        ((List_1_System_Object_ *)RVar13,(Comparison_1_Object_ *)RStack_11,
                         MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Sort_System__Comparison<RTG::Gizmo>_
                        );
              RStack_11 = (RegexCharClass_SingleRange)
                          CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes
                                    (renderCamera,(MethodInfo *)0x0);
              pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                 (&LStack_15,
                                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)RVar13,
                                  MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__
                                 );
              LStack_15._current = (RegexCharClass_SingleRange)&stack0xffffffb4;
              pOVar12 = (Object__Class *)pLVar9->_list;
              RVar13 = pLVar9->_current;
              LStack_15._version = 0;
              uStack_1 = 1;
              while( true ) {
                bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                                  );
                if (bVar7 == 0) break;
                if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
                Gizmo::Gizmo_Render_SystemCall
                          ((Gizmo *)RVar13,renderCamera,(Plane__Array *)RStack_11,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SortHandleHoverDataCollection(List`1[RTG.GizmoHandleHoverData], Vector3) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_SortHandleHoverDataCollection
               (RTGizmosEngine *this,List_1_RTG_GizmoHandleHoverData_ *hoverDataCollection,
               Vector3 inputDevicePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__RTG__RTGizmosEngine____c__DisplayClass116_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                   );
    func_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass116_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTGizmosEngine____c__DisplayClass116_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)inputDevicePos.x;
    value[1].monitor = (MonitorData *)inputDevicePos.y;
    value[2].klass = (Object__Class *)inputDevicePos.z;
    if (hoverDataCollection != (List_1_RTG_GizmoHandleHoverData_ *)0x0) {
      if ((hoverDataCollection->fields)._size != 0) {
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           hoverDataCollection,0,
                           MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                          );
        if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
        pOVar2 = *(Object__Class **)((int)RVar1 + 0x18);
        pMVar3 = *(MonitorData **)((int)RVar1 + 0x1c);
        pOVar4 = *(Object__Class **)((int)RVar1 + 0x20);
        uVar5 = *(undefined8 *)((int)RVar1 + 0x24);
        value[2].monitor = *(MonitorData **)((int)RVar1 + 0x14);
        value[3].klass = pOVar2;
        value[3].monitor = pMVar3;
        value[4].klass = pOVar4;
        *(undefined8 *)&value[4].monitor = uVar5;
        this_00 = (Comparison_1_Object_ *)func_?();
        mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                  (this_00,value,
                   MethodInfo__RTG__RTGizmosEngine____c__DisplayClass116_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                   ,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Sort_1
                  ((List_1_System_Object_ *)hoverDataCollection,this_00,
                   MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UnregisterGizmo(Gizmo) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_UnregisterGizmo
               (RTGizmosEngine *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    func_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Remove_RTG__Gizmo_)
    ;
    func_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._gizmos;
  if (this_00 != (List_1_RTG_Gizmo_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)this_00,(Object *)gizmo,
                       MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Remove_RTG__Gizmo_
                      );
    if (bVar1 != 0) {
      value = (GizmoPreDragBeginHandler *)func_?(TypeInfo__RTG__GizmoPreDragBeginHandler);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                ((EventHandler_1_Object_ *)value,(Object *)this,
                 MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_,
                 (MethodInfo *)0x0);
      if (gizmo == (Gizmo *)0x0) goto code_?;
      Gizmo::Gizmo_remove_PreDragBegin(gizmo,value,(MethodInfo *)0x0);
      value_00 = (GizmoPreDragEndHandler *)func_?(TypeInfo__RTG__GizmoPreDragEndHandler);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                ((EventHandler_1_Object_ *)value_00,(Object *)this,
                 MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_,(MethodInfo *)0x0)
      ;
      Gizmo::Gizmo_remove_PreDragEnd(gizmo,value_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_Update_SystemCall
               (RTGizmosEngine *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTSceneGizmoCamera>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTSceneGizmoCamera>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTSceneGizmoCamera>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Add_RTG__GizmoHandleHoverData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__YesNoAnswer);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._sceneGizmoCameras;
  auStack_7._0_4_ =
       (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___Class
        *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
  auStack_7._12_2_ = 0;
  auStack_7._14_2_ = 0;
  auStack_8._0_4_ = (Il2CppRGCTXData *)0x0;
  auStack_8._4_4_ = (Il2CppRGCTXData *)0x0;
  auStack_8._8_4_ = (Il2CppRGCTXData *)0x0;
  auStack_8._12_2_ = 0;
  auStack_8._14_2_ = 0;
  if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pMVar9 = (MethodInfo *)auStack_10;
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)pMVar9,pLVar6,
                         MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__GetEnumerator__
                        );
    _Stack_38.genericMethod = (Il2CppGenericMethod *)0x0;
    auStack_7._0_4_ = pLVar11->_list;
    auStack_7._4_4_ = pLVar11->_index;
    auStack_7._8_4_ = pLVar11->_version;
    auStack_7._12_4_ = pLVar11->_current;
    uStack_1 = 1;
    pLStack_12 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)auStack_7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)auStack_7,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTSceneGizmoCamera>__MoveNext__
                         );
      if (bVar13 == 0) break;
      if ((RegexCharClass_SingleRange)auStack_7._12_4_ == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      RTSceneGizmoCamera::RTSceneGizmoCamera_Update_SystemCall
                ((RTSceneGizmoCamera *)auStack_7._12_4_,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)auStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTSceneGizmoCamera>__Dispose__
               ,pMVar9);
    uStack_1 = 0xffffffff;
    (this->fields)._pipelineStage = 0;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    }
    pOVar14 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if (pOVar14 != (Object *)0x0) {
      RVar15 = (RegexCharClass_SingleRange)pOVar14[2].klass;
      RStack_16 = RVar15;
      if (RVar15 != (RegexCharClass_SingleRange)0x0) {
        bStack_17 = func_?(8,TypeInfo__RTG__IInputDevice,RVar15);
        uVar18 = 0;
        uStack_19 = *(uint *)RVar15;
        RStack_20.First = 0;
        RStack_20.Last = 0;
        if (*(short *)(uStack_19 + 0xb6) != 0) {
          do {
            RVar15 = RStack_16;
            if (*(IInputDevice__Class **)(*(int *)(uStack_19 + 0x58) + (uint)uVar18 * 8) ==
                TypeInfo__RTG__IInputDevice) {
              puVar21 = (undefined4 *)
                        (*(int *)RStack_16 +
                        (*(int *)(*(int *)(*(int *)RStack_16 + 0x58) + 4 + (uint)uVar18 * 8) + 0x1f)
                        * 8);
              goto code_?;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(ushort *)(*(int *)RStack_16 + 0xb6));
        }
        puVar21 = (undefined4 *)func_?(RVar15,TypeInfo__RTG__IInputDevice,7);
code_?:
        puVar22 = (undefined8 *)(*(code *)*puVar21)(auStack_23,RVar15,puVar21[1]);
        auStack_10._4_8_ = *puVar22;
        auStack_10._12_4_ = *(RegexCharClass_SingleRange *)(puVar22 + 1);
        auStack_10._16_8_ = auStack_10._4_8_;
        RStack_20 = (RegexCharClass_SingleRange)auStack_10._12_4_;
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
        }
        this_01 = (RTScene *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
        if (this_01 != (RTScene *)0x0) {
          bVar13 = RTScene::RTScene_IsAnyUIElementHovered(this_01,(MethodInfo *)0x0);
          if (((this->fields)._draggedGizmo == (Gizmo *)0x0) && (bVar13 == 0)) {
            CVar24 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState
                               ((MethodInfo *)0x0);
            pMStack_25 = (MethodInfo *)(uint)(CVar24 == CursorLockMode__Enum_None);
          }
          else {
            pMStack_25 = (MethodInfo *)0x0;
          }
          cStack_26 = (char)pMStack_25;
          (this->fields)._justReleasedDrag = 0;
          if (cStack_26 != '\0') {
            this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                      func_?(TypeInfo__RTG__YesNoAnswer);
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
            if ((this->fields).CanDoHoverUpdate != (GizmoEngineCanDoHoverUpdateHandler *)0x0) {
              pGVar27 = (this->fields).CanDoHoverUpdate;
              (*(pGVar27->fields)._._.invoke_impl)
                        ((pGVar27->fields)._._.method_code,this_02,(pGVar27->fields)._._.method);
            }
            if (this_02 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)
            goto code_?;
            pMStack_25 = (MethodInfo *)((uint)pMStack_25 & 0xff);
            if (*(char *)((int)&(this_02->fields)._._defaultValue_k__BackingField + 1) != '\0') {
              pMStack_25 = (MethodInfo *)0x0;
            }
            cStack_26 = (char)pMStack_25;
          }
          (this->fields)._hoveredGizmo = (Gizmo *)0x0;
          func_?(&(this->fields)._hoveredGizmo,0);
          GizmoHoverInfo::GizmoHoverInfo_Reset(&(this->fields)._gizmoHoverInfo,(MethodInfo *)0x0);
          if (bStack_17 == 0) {
            bStack_28 = 0;
          }
          else {
            if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
            }
            this_03 = (RTFocusCamera *)
                      MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
            if (this_03 == (RTFocusCamera *)0x0) goto code_?;
            bStack_28 = RTFocusCamera::RTFocusCamera_IsViewportHoveredByDevice
                                  (this_03,(MethodInfo *)0x0);
          }
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          pOVar14 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
          if (pOVar14 != (Object *)0x0) {
            pOVar14 = (Object *)pOVar14[4].monitor;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_00 = (this->fields)._renderCameras;
            if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
              bStack_29 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Contains
                                    ((List_1_System_Object_ *)this_00,pOVar14,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                                    );
              RVar15 = (RegexCharClass_SingleRange)&UNK_?;
              pLVar30 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)func_?(
                                          TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>
                                          );
              pLStack_31 = pLVar30;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                        (pLVar30,10,
                         MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_
                        );
              pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields)._gizmos;
              pLStack_12 = pLVar30;
              if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                pMVar9 = 
                MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__;
                p_Var25 = (_union_154 *)
                          mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                    ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)(auStack_8 + 0x10),pLVar6,
                                     MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__
                                    );
                auStack_8._0_4_ = *p_Var25;
                auStack_8._4_4_ = *(_union_155 *)(p_Var25 + 1);
                auStack_8._8_4_ = p_Var25[2];
                auStack_8._12_4_ = p_Var25[3].methodMetadataHandle;
                ppIStack_32 = (Il2CppType **)0x0;
                uStack_1 = 4;
                _Stack_3c.rgctx_data = ((Il2CppRGCTXData *)auStack_8).rgctx_data;
                while( true ) {
                  method_00 = (RTGizmosEngine_c_DisplayClass116_0__Class **)auStack_8;
                  bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     ((List_1_T_Enumerator_System_Object_ *)method_00,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                                     );
                  if (bVar13 == 0) break;
                  RStack_16.First = auStack_8._12_2_;
                  RStack_16.Last = auStack_8._14_2_;
                  if ((RegexCharClass_SingleRange)auStack_8._12_4_ ==
                      (RegexCharClass_SingleRange)0x0) goto code_?;
                  Gizmo::Gizmo_OnUpdateBegin_SystemCall
                            ((Gizmo *)auStack_8._12_4_,(MethodInfo *)0x0);
                  if ((char)pMStack_25 == '\0') {
                    uStack_19 = 0;
                  }
                  else {
                    if (RStack_16 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    uStack_19 = (uint)*(byte *)((int)RStack_16 + 0x54);
                  }
                  if ((byte)((byte)uStack_19 & bStack_29 & bStack_28 & bStack_17) != 0) {
                    RVar15 = RStack_16;
                    item = RTGizmosEngine_GetGizmoHandleHoverData
                                     (this,(Gizmo *)RStack_16,(MethodInfo *)0x0);
                    if (item != (GizmoHandleHoverData *)0x0) {
                      if (pLStack_31 ==
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)0x0) goto code_?;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLStack_31,(Object *)item,
                                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Add_RTG__GizmoHandleHoverData_
                                );
                    }
                  }
                }
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)auStack_8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                           ,(MethodInfo *)RVar15);
                pLVar30 = pLStack_31;
                uStack_1 = 0xffffffff;
                if ((char)pMStack_25 != '\0') {
                  if (pLStack_31 ==
                      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
                  if ((pLStack_31->fields)._size != 0) {
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
                      func_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                                     );
                      func_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                                     );
                      func_?(&
                                      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                                     );
                      func_?(&
                                      MethodInfo__RTG__RTGizmosEngine____c__DisplayClass116_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                                     );
                      method_00 = &TypeInfo__RTG__RTGizmosEngine____c__DisplayClass116_0;
                      func_?();
                      cRam_? = '\x01';
                    }
                    pMVar9 = (MethodInfo *)
                              func_?(TypeInfo__RTG__RTGizmosEngine____c__DisplayClass116_0)
                    ;
                    pMStack_25 = pMVar9;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)pMVar9,ExceptionArgument__Enum_obj,(MethodInfo *)method_00
                              );
                    if (pMStack_25 == (MethodInfo *)0x0) goto code_?;
                    pMStack_25->invoker_method = (InvokerMethod)auStack_10._16_4_;
                    pMStack_25->name = (char *)auStack_10._20_4_;
                    pMStack_25->klass = (Il2CppClass *)RStack_20;
                    if ((pLVar30->fields)._size != 0) {
                      RVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                           *)pLVar30,0,
                                          MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                                         );
                      if (RVar15 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      ppIVar33 = *(Il2CppType ***)((int)RVar15 + 0x18);
                      _Var9 = *(_union_154 *)((int)RVar15 + 0x1c);
                      _Var10 = *(_union_155 *)((int)RVar15 + 0x20);
                      uVar34 = *(undefined8 *)((int)RVar15 + 0x24);
                      pMStack_25->return_type = *(Il2CppType **)((int)RVar15 + 0x14);
                      pMStack_25->parameters = ppIVar33;
                      pMStack_25->field7_0x1c = _Var9;
                      pMStack_25->field8_0x20 = _Var10;
                      pMStack_25->token = (int)uVar34;
                      pMStack_25->flags = (short)((ulonglong)uVar34 >> 0x20);
                      pMStack_25->iflags = (short)((ulonglong)uVar34 >> 0x30);
                      this_04 = (Comparison_1_Object_ *)
                                func_?(
                                               TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>
                                               );
                      mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                                (this_04,(Object *)pMStack_25,
                                 MethodInfo__RTG__RTGizmosEngine____c__DisplayClass116_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                                 ,(MethodInfo *)0x0);
                      pLVar30 = pLStack_31;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Sort_1
                                ((List_1_System_Object_ *)pLStack_31,this_04,
                                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                                );
                    }
                    RVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)pLVar30,0,
                                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                                       );
                    if (RVar15 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    pGVar35 = *(Gizmo **)((int)RVar15 + 0xc);
                    (this->fields)._hoveredGizmo = pGVar35;
                    func_?(&(this->fields)._hoveredGizmo,pGVar35);
                    (this->fields)._gizmoHoverInfo._handleId = *(int32_t *)((int)RVar15 + 8);
                    (this->fields)._gizmoHoverInfo._handleDimension =
                         *(int32_t *)((int)RVar15 + 0x10);
                    uVar34 = *(undefined8 *)((int)RVar15 + 0x2c);
                    fVar36 = *(float *)((int)RVar15 + 0x34);
                    (this->fields)._gizmoHoverInfo._hoverPoint.x = (float)(int)uVar34;
                    (this->fields)._gizmoHoverInfo._hoverPoint.y =
                         (float)(int)((ulonglong)uVar34 >> 0x20);
                    (this->fields)._gizmoHoverInfo._hoverPoint.z = fVar36;
                    (this->fields)._gizmoHoverInfo._isHovered = 1;
                  }
                }
                pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields)._gizmos;
                if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              0x0) {
                  p_Var25 = (_union_154 *)
                            mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                      ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)auStack_10,pLVar6,
                                       MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__
                                      );
                  ppIStack_32 = (Il2CppType **)0x0;
                  auStack_8._0_4_ = *p_Var25;
                  auStack_8._4_4_ = *(_union_155 *)(p_Var25 + 1);
                  auStack_8._8_4_ = p_Var25[2];
                  auStack_8._12_4_ = p_Var25[3].methodMetadataHandle;
                  uStack_1 = 7;
                  _Stack_3c.rgctx_data = ((Il2CppRGCTXData *)auStack_8).rgctx_data;
                  while( true ) {
                    bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                             ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                       ((List_1_T_Enumerator_System_Object_ *)auStack_8,
                                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                                       );
                    uVar37 = auStack_8._12_4_;
                    if (bVar13 == 0) {
                      uStack_1 = 0xffffffff;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                ((Object *)auStack_8,
                                 (ExceptionArgument__Enum)
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                                 ,pMVar9);
                      (this->fields)._pipelineStage = 1;
                      *unaff_FS_OFFSET = uStack_3;
                      return;
                    }
                    (this->fields)._gizmoHoverInfo._isHovered =
                         (Gizmo *)auStack_8._12_4_ == (this->fields)._hoveredGizmo;
                    if ((RegexCharClass_SingleRange)auStack_8._12_4_ ==
                        (RegexCharClass_SingleRange)0x0) break;
                    uVar38 = (this->fields)._gizmoHoverInfo._hoverPoint.z;
                    uVar39 = (this->fields)._gizmoHoverInfo._isHovered;
                    uVar40 = *(undefined3 *)&(this->fields)._gizmoHoverInfo.field_0x1;
                    uVar41 = (this->fields)._gizmoHoverInfo._handleId;
                    uVar42 = (this->fields)._gizmoHoverInfo._handleDimension;
                    uVar43 = (this->fields)._gizmoHoverInfo._hoverPoint.x;
                    uVar44 = (this->fields)._gizmoHoverInfo._hoverPoint.y;
                    hoverInfo._hoverPoint.y = (float)uVar44;
                    hoverInfo._hoverPoint.x = (float)uVar43;
                    hoverInfo._handleDimension = uVar42;
                    hoverInfo._handleId = uVar41;
                    hoverInfo._1_3_ = uVar40;
                    hoverInfo._isHovered = uVar39;
                    hoverInfo._hoverPoint.z = (float)uVar38;
                    Gizmo::Gizmo_UpdateHandleHoverInfo_SystemCall
                              ((Gizmo *)auStack_8._12_4_,hoverInfo,(MethodInfo *)0x0);
                    if ((RegexCharClass_SingleRange)uVar37 == (RegexCharClass_SingleRange)0x0)
                    break;
                    Gizmo::Gizmo_HandleInputDeviceEvents_SystemCall
                              ((Gizmo *)uVar37,(MethodInfo *)0x0);
                    Gizmo::Gizmo_OnUpdateEnd_SystemCall((Gizmo *)uVar37,(MethodInfo *)0x0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar37 = func_?();
  uVar37 = func_?(uVar37);
  func_?(uVar37);
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
  return;
}


/* RTGizmosEngine() */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine__ctor
               (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__EditorToolbarTab);
    func_?(&TypeInfo__RTG__EditorToolbarTab);
    func_?(&TypeInfo__RTG__EditorToolbar);
    func_?(&TypeInfo__RTG__GizmoEngineSettings);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::ISceneGizmo>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::ISceneGizmo>);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__MoveGizmoHotkeys);
    func_?(&TypeInfo__RTG__MoveGizmoLookAndFeel2D);
    func_?(&TypeInfo__RTG__MoveGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__MoveGizmoSettings2D);
    func_?(&TypeInfo__RTG__MoveGizmoSettings3D);
    func_?(&TypeInfo__RTG__ObjectTransformGizmoSettings);
    func_?(&TypeInfo__RTG__RotationGizmoHotkeys);
    func_?(&TypeInfo__RTG__RotationGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__RotationGizmoSettings3D);
    func_?(&TypeInfo__RTG__ScaleGizmoHotkeys);
    func_?(&TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__ScaleGizmoSettings3D);
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    func_?(&TypeInfo__RTG__UniversalGizmoConfig);
    func_?(&TypeInfo__RTG__UniversalGizmoHotkeys);
    func_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel2D);
    func_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__UniversalGizmoSettings2D);
    func_?(&TypeInfo__RTG__UniversalGizmoSettings3D);
    func_?(&StringLiteral_General_gizmo_engine_settings_);
    func_?(&StringLiteral_Rotation_gizmo);
    func_?(&StringLiteral_General);
    func_?(&StringLiteral_Universal_gizmo);
    func_?(&StringLiteral_Scale_gizmo);
    func_?(&StringLiteral_Move_gizmo);
    func_?(&StringLiteral_Allows_you_to_change_scale_gizmo);
    func_?(&StringLiteral_Scene_gizmo);
    func_?(&StringLiteral_Allows_you_to_change_rotation_se);
    func_?(&StringLiteral_Allows_you_to_change_move_gizmo_);
    func_?(&StringLiteral_Allows_you_to_change_universal_g);
    func_?(&StringLiteral_Scene_gizmo_specific_settings_);
    cRam_? = '\x01';
  }
  tabs = (EditorToolbarTab__Array *)func_?(TypeInfo__RTG__EditorToolbarTab,6);
  pEVar1 = (EditorToolbarTab *)func_?(TypeInfo__RTG__EditorToolbarTab);
  EditorToolbarTab::EditorToolbarTab__ctor
            (pEVar1,StringLiteral_General,StringLiteral_General_gizmo_engine_settings_,
             (MethodInfo *)0x0);
  if (tabs == (EditorToolbarTab__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?();
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
  }
  else {
    if (pEVar1 != (EditorToolbarTab *)0x0) {
      iVar3 = func_?(pEVar1);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (tabs->max_length == 0) goto code_?;
    tabs->vector[0] = pEVar1;
    func_?(tabs->vector);
    pEVar1 = (EditorToolbarTab *)func_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar1,StringLiteral_Scene_gizmo,StringLiteral_Scene_gizmo_specific_settings_,
               (MethodInfo *)0x0);
    if (pEVar1 != (EditorToolbarTab *)0x0) {
      iVar3 = func_?(pEVar1);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (tabs->max_length < 2) goto code_?;
    tabs->vector[1] = pEVar1;
    func_?(tabs->vector + 1);
    pEVar1 = (EditorToolbarTab *)func_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar1,StringLiteral_Move_gizmo,StringLiteral_Allows_you_to_change_move_gizmo_,
               (MethodInfo *)0x0);
    if (pEVar1 != (EditorToolbarTab *)0x0) {
      iVar3 = func_?(pEVar1);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (tabs->max_length < 3) goto code_?;
    tabs->vector[2] = pEVar1;
    func_?(tabs->vector + 2);
    pEVar1 = (EditorToolbarTab *)func_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar1,StringLiteral_Rotation_gizmo,StringLiteral_Allows_you_to_change_rotation_se,
               (MethodInfo *)0x0);
    if (pEVar1 != (EditorToolbarTab *)0x0) {
      iVar3 = func_?(pEVar1);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (tabs->max_length < 4) goto code_?;
    tabs->vector[3] = pEVar1;
    func_?(tabs->vector + 3);
    pEVar1 = (EditorToolbarTab *)func_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar1,StringLiteral_Scale_gizmo,StringLiteral_Allows_you_to_change_scale_gizmo,
               (MethodInfo *)0x0);
    if (pEVar1 != (EditorToolbarTab *)0x0) {
      iVar3 = func_?(pEVar1);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (tabs->max_length < 5) goto code_?;
    tabs->vector[4] = pEVar1;
    func_?(tabs->vector + 4);
    pEVar1 = (EditorToolbarTab *)func_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar1,StringLiteral_Universal_gizmo,StringLiteral_Allows_you_to_change_universal_g,
               (MethodInfo *)0x0);
    if (pEVar1 == (EditorToolbarTab *)0x0) {
code_?:
      if (tabs->max_length < 6) goto code_?;
      tabs->vector[5] = pEVar1;
      func_?(tabs->vector + 5);
      this_00 = (EditorToolbar *)func_?(TypeInfo__RTG__EditorToolbar);
      activeTabColor.g = (float)_UNK_?;
      activeTabColor.r = (float)_UNK_?;
      activeTabColor.b = (float)_UNK_?;
      activeTabColor.a = _UNK_?;
      EditorToolbar::EditorToolbar__ctor(this_00,tabs,6,activeTabColor,(MethodInfo *)0x0);
      (this->fields)._mainToolbar = this_00;
      func_?(&(this->fields)._mainToolbar);
      this_01 = (GizmoEngineSettings *)func_?(TypeInfo__RTG__GizmoEngineSettings);
      (this_01->fields)._enableGizmoSorting = 1;
      Settings::Settings__ctor((Settings *)this_01,(MethodInfo *)0x0);
      (this->fields)._settings = this_01;
      func_?(&(this->fields)._settings,this_01);
      this_02 = (List_1_RTG_Gizmo_ *)
                func_?(TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List__);
      (this->fields)._gizmos = this_02;
      func_?();
      this_03 = (List_1_RTG_ISceneGizmo_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
                 MethodInfo__System__Collections__Generic__List<RTG::ISceneGizmo>__List__);
      (this->fields)._sceneGizmos = this_03;
      func_?();
      this_04 = (List_1_RTG_RTSceneGizmoCamera_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
                 MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__List__);
      (this->fields)._sceneGizmoCameras = this_04;
      func_?();
      this_05 = (List_1_UnityEngine_Camera_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_05,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
      (this->fields)._renderCameras = this_05;
      func_?();
      this_06 = (SceneGizmoLookAndFeel *)func_?();
      SceneGizmoLookAndFeel::SceneGizmoLookAndFeel__ctor(this_06,(MethodInfo *)0x0);
      (this->fields)._sceneGizmoLookAndFeel = this_06;
      func_?();
      this_07 = (MoveGizmoSettings2D *)func_?();
      MoveGizmoSettings2D::MoveGizmoSettings2D__ctor(this_07,(MethodInfo *)0x0);
      if (this_07 != (MoveGizmoSettings2D *)0x0) {
        (this_07->fields)._._isExpanded = 0;
        (this->fields)._moveGizmoSettings2D = this_07;
        func_?(&(this->fields)._moveGizmoSettings2D);
        this_08 = (MoveGizmoSettings3D *)func_?(TypeInfo__RTG__MoveGizmoSettings3D);
        MoveGizmoSettings3D::MoveGizmoSettings3D__ctor(this_08,(MethodInfo *)0x0);
        if (this_08 != (MoveGizmoSettings3D *)0x0) {
          (this_08->fields)._._isExpanded = 0;
          (this->fields)._moveGizmoSettings3D = this_08;
          func_?(&(this->fields)._moveGizmoSettings3D);
          this_09 = (MoveGizmoLookAndFeel2D *)func_?(TypeInfo__RTG__MoveGizmoLookAndFeel2D)
          ;
          MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D__ctor(this_09,(MethodInfo *)0x0);
          if (this_09 != (MoveGizmoLookAndFeel2D *)0x0) {
            (this_09->fields)._._isExpanded = 0;
            (this->fields)._moveGizmoLookAndFeel2D = this_09;
            func_?(&(this->fields)._moveGizmoLookAndFeel2D);
            this_10 = (MoveGizmoLookAndFeel3D *)
                      func_?(TypeInfo__RTG__MoveGizmoLookAndFeel3D);
            MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D__ctor(this_10,(MethodInfo *)0x0);
            if (this_10 != (MoveGizmoLookAndFeel3D *)0x0) {
              (this_10->fields)._._isExpanded = 0;
              (this->fields)._moveGizmoLookAndFeel3D = this_10;
              func_?(&(this->fields)._moveGizmoLookAndFeel3D);
              this_11 = (MoveGizmoHotkeys *)func_?(TypeInfo__RTG__MoveGizmoHotkeys);
              MoveGizmoHotkeys::MoveGizmoHotkeys__ctor(this_11,(MethodInfo *)0x0);
              if (this_11 != (MoveGizmoHotkeys *)0x0) {
                (this_11->fields)._._isExpanded = 0;
                (this->fields)._moveGizmoHotkeys = this_11;
                func_?(&(this->fields)._moveGizmoHotkeys);
                pOVar4 = (ObjectTransformGizmoSettings *)
                         func_?(TypeInfo__RTG__ObjectTransformGizmoSettings);
                ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
                          (pOVar4,(MethodInfo *)0x0);
                if (pOVar4 != (ObjectTransformGizmoSettings *)0x0) {
                  (pOVar4->fields)._._isExpanded = 0;
                  (this->fields)._objectMoveGizmoSettings = pOVar4;
                  func_?(&(this->fields)._objectMoveGizmoSettings);
                  this_12 = (RotationGizmoSettings3D *)
                            func_?(TypeInfo__RTG__RotationGizmoSettings3D);
                  RotationGizmoSettings3D::RotationGizmoSettings3D__ctor(this_12,(MethodInfo *)0x0);
                  if (this_12 != (RotationGizmoSettings3D *)0x0) {
                    (this_12->fields)._._isExpanded = 0;
                    (this->fields)._rotationGizmoSettings3D = this_12;
                    func_?(&(this->fields)._rotationGizmoSettings3D);
                    this_13 = (RotationGizmoLookAndFeel3D *)
                              func_?(TypeInfo__RTG__RotationGizmoLookAndFeel3D);
                    RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D__ctor
                              (this_13,(MethodInfo *)0x0);
                    if (this_13 != (RotationGizmoLookAndFeel3D *)0x0) {
                      (this_13->fields)._._isExpanded = 0;
                      (this->fields)._rotationGizmoLookAndFeel3D = this_13;
                      func_?(&(this->fields)._rotationGizmoLookAndFeel3D);
                      this_14 = (RotationGizmoHotkeys *)
                                func_?(TypeInfo__RTG__RotationGizmoHotkeys);
                      RotationGizmoHotkeys::RotationGizmoHotkeys__ctor(this_14,(MethodInfo *)0x0);
                      if (this_14 != (RotationGizmoHotkeys *)0x0) {
                        (this_14->fields)._._isExpanded = 0;
                        (this->fields)._rotationGizmoHotkeys = this_14;
                        func_?(&(this->fields)._rotationGizmoHotkeys);
                        pOVar4 = (ObjectTransformGizmoSettings *)
                                 func_?(TypeInfo__RTG__ObjectTransformGizmoSettings);
                        ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
                                  (pOVar4,(MethodInfo *)0x0);
                        if (pOVar4 != (ObjectTransformGizmoSettings *)0x0) {
                          (pOVar4->fields)._._isExpanded = 0;
                          (this->fields)._objectRotationGizmoSettings = pOVar4;
                          func_?(&(this->fields)._objectRotationGizmoSettings);
                          this_15 = (ScaleGizmoSettings3D *)
                                    func_?(TypeInfo__RTG__ScaleGizmoSettings3D);
                          ScaleGizmoSettings3D::ScaleGizmoSettings3D__ctor
                                    (this_15,(MethodInfo *)0x0);
                          if (this_15 != (ScaleGizmoSettings3D *)0x0) {
                            (this_15->fields)._._isExpanded = 0;
                            (this->fields)._scaleGizmoSettings3D = this_15;
                            func_?(&(this->fields)._scaleGizmoSettings3D);
                            this_16 = (ScaleGizmoLookAndFeel3D *)
                                      func_?(TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
                            ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D__ctor
                                      (this_16,(MethodInfo *)0x0);
                            if (this_16 != (ScaleGizmoLookAndFeel3D *)0x0) {
                              (this_16->fields)._._isExpanded = 0;
                              (this->fields)._scaleGizmoLookAndFeel3D = this_16;
                              func_?(&(this->fields)._scaleGizmoLookAndFeel3D);
                              this_17 = (ScaleGizmoHotkeys *)
                                        func_?(TypeInfo__RTG__ScaleGizmoHotkeys);
                              ScaleGizmoHotkeys::ScaleGizmoHotkeys__ctor(this_17,(MethodInfo *)0x0);
                              if (this_17 != (ScaleGizmoHotkeys *)0x0) {
                                (this_17->fields)._._isExpanded = 0;
                                (this->fields)._scaleGizmoHotkeys = this_17;
                                func_?(&(this->fields)._scaleGizmoHotkeys);
                                pOVar4 = (ObjectTransformGizmoSettings *)
                                         func_?(TypeInfo__RTG__ObjectTransformGizmoSettings
                                                        );
                                ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
                                          (pOVar4,(MethodInfo *)0x0);
                                if (pOVar4 != (ObjectTransformGizmoSettings *)0x0) {
                                  (pOVar4->fields)._._isExpanded = 0;
                                  (this->fields)._objectScaleGizmoSettings = pOVar4;
                                  func_?(&(this->fields)._objectScaleGizmoSettings);
                                  this_18 = (UniversalGizmoConfig *)
                                            func_?(TypeInfo__RTG__UniversalGizmoConfig);
                                  UniversalGizmoConfig::UniversalGizmoConfig__ctor
                                            (this_18,(MethodInfo *)0x0);
                                  (this->fields)._universalGizmoConfig = this_18;
                                  func_?(&(this->fields)._universalGizmoConfig,this_18);
                                  this_19 = (UniversalGizmoSettings2D *)
                                            func_?(TypeInfo__RTG__UniversalGizmoSettings2D)
                                  ;
                                  UniversalGizmoSettings2D::UniversalGizmoSettings2D__ctor
                                            (this_19,(MethodInfo *)0x0);
                                  if (this_19 != (UniversalGizmoSettings2D *)0x0) {
                                    (this_19->fields)._._isExpanded = 0;
                                    (this->fields)._universalGizmoSettings2D = this_19;
                                    func_?(&(this->fields)._universalGizmoSettings2D);
                                    this_20 = (UniversalGizmoSettings3D *)
                                              func_?(
                                                  TypeInfo__RTG__UniversalGizmoSettings3D);
                                    UniversalGizmoSettings3D::UniversalGizmoSettings3D__ctor
                                              (this_20,(MethodInfo *)0x0);
                                    if (this_20 != (UniversalGizmoSettings3D *)0x0) {
                                      (this_20->fields)._._isExpanded = 0;
                                      (this->fields)._universalGizmoSettings3D = this_20;
                                      func_?(&(this->fields)._universalGizmoSettings3D);
                                      this_21 = (UniversalGizmoLookAndFeel2D *)
                                                func_?(
                                                  TypeInfo__RTG__UniversalGizmoLookAndFeel2D);
                                      UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D__ctor
                                                (this_21,(MethodInfo *)0x0);
                                      if (this_21 != (UniversalGizmoLookAndFeel2D *)0x0) {
                                        (this_21->fields)._._isExpanded = 0;
                                        (this->fields)._universalGizmoLookAndFeel2D = this_21;
                                        func_?(&(this->fields)._universalGizmoLookAndFeel2D
                                                       );
                                        this_22 = (UniversalGizmoLookAndFeel3D *)
                                                  func_?(
                                                  TypeInfo__RTG__UniversalGizmoLookAndFeel3D);
                                        UniversalGizmoLookAndFeel3D::
                                        UniversalGizmoLookAndFeel3D__ctor(this_22,(MethodInfo *)0x0)
                                        ;
                                        if (this_22 != (UniversalGizmoLookAndFeel3D *)0x0) {
                                          (this_22->fields)._._isExpanded = 0;
                                          (this->fields)._universalGizmoLookAndFeel3D = this_22;
                                          func_?(&(this->fields).
                                                           _universalGizmoLookAndFeel3D);
                                          this_23 = (UniversalGizmoHotkeys *)
                                                    func_?(
                                                  TypeInfo__RTG__UniversalGizmoHotkeys);
                                          UniversalGizmoHotkeys::UniversalGizmoHotkeys__ctor
                                                    (this_23,(MethodInfo *)0x0);
                                          if (this_23 != (UniversalGizmoHotkeys *)0x0) {
                                            (this_23->fields)._._isExpanded = 0;
                                            (this->fields)._universalGizmoHotkeys = this_23;
                                            func_?(&(this->fields)._universalGizmoHotkeys);
                                            pOVar4 = (ObjectTransformGizmoSettings *)
                                                     func_?(
                                                  TypeInfo__RTG__ObjectTransformGizmoSettings);
                                            ObjectTransformGizmoSettings::
                                            ObjectTransformGizmoSettings__ctor
                                                      (pOVar4,(MethodInfo *)0x0);
                                            if (pOVar4 != (ObjectTransformGizmoSettings *)0x0) {
                                              (pOVar4->fields)._._isExpanded = 0;
                                              (this->fields)._objectUniversalGizmoSettings = pOVar4;
                                              func_?(&(this->fields).
                                                               _objectUniversalGizmoSettings);
                                              if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>
                                                  ->_1).cctor_finished_or_no_cctor == 0) {
                                                func_?();
                                              }
                                              Borodar::FarlandSkies::CloudyCrownPro::Helpers::
                                              Singleton`1[System::Object]::
                                              Singleton_1_System_Object___ctor
                                                        ((Singleton_1_System_Object_ *)this,
                                                                                                                  
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__MonoSingleton__
                                                  );
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
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    iVar3 = func_?(pEVar1);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?();
  func_?(uVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void add_CanDoHoverUpdate(GizmoEngineCanDoHoverUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_add_CanDoHoverUpdate
               (RTGizmosEngine *this,GizmoEngineCanDoHoverUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).CanDoHoverUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoEngineCanDoHoverUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoEngineCanDoHoverUpdateHandler *)
             func_?(&(this->fields).CanDoHoverUpdate,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Int32 get_NumRenderCameras() */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras
                  (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._renderCameras;
  if (pLVar2 != (List_1_UnityEngine_Camera_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Camera get_RenderStageCamera() */

Camera * Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_get_RenderStageCamera
                   (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &TypeInfo__RTG__MonoSingleton<RTG::RTGApp>;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
  if (pOVar2 != (Object *)0x0) {
    return (Camera *)pOVar2[2].monitor;
  }
  uVar3 = func_?(&ppMStack_1);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Camera *)(*pcVar4)();
  return pCVar5;
}


/* Void remove_CanDoHoverUpdate(GizmoEngineCanDoHoverUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_remove_CanDoHoverUpdate
               (RTGizmosEngine *this,GizmoEngineCanDoHoverUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).CanDoHoverUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoEngineCanDoHoverUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoEngineCanDoHoverUpdateHandler *)
             func_?(&(this->fields).CanDoHoverUpdate,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

