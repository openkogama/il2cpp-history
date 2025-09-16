
/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::SceneGizmo::SceneGizmo_OnAttached
               (SceneGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AxisDescriptor);
    func_?(&TypeInfo__RTG__AxisDescriptor);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__Add_RTG__SceneGizmoCap_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__SceneGizmoAxisCap);
    func_?(&TypeInfo__RTG__SceneGizmoCamPrjSwitchLabel);
    func_?(&TypeInfo__RTG__SceneGizmoCamViewportUpdater);
    func_?(&TypeInfo__RTG__SceneGizmoMidCap);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  pOVar2 = pOVar1;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
  }
  pOVar3 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar3 == (Object *)0x0) {
code_?:
    func_?();
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
  }
  else {
    value_03 = (Camera *)pOVar3[4].monitor;
    method_00 = TypeInfo__RTG__SceneGizmoCamViewportUpdater;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pOVar3[1].klass = (Object__Class *)this;
    func_?(pOVar3 + 1,this);
    if (pOVar1 == (Object *)0x0) goto code_?;
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
    pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (pTVar5 == (Type *)0x0) goto code_?;
    name = (String *)
           (*(code *)(pTVar5->klass->vtable).ToString.method)
                     (pTVar5,(pTVar5->klass->vtable).GetCustomAttributes.methodPtr);
    this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this_00,name,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    }
    this_02 = (Component *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if ((this_02 == (Component *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_02,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (this_01,value,(MethodInfo *)0x0);
    pRVar6 = (RTSceneGizmoCamera *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this_00,
                         RTG__RTSceneGizmoCamera_MethodInfo__UnityEngine__GameObject__AddComponent<RTG::RTSceneGizmoCamera>__
                        );
    if (pRVar6 == (RTSceneGizmoCamera *)0x0) goto code_?;
    (pRVar6->fields)._viewportUpdater = (ISceneGizmoCamViewportUpdater *)pOVar3;
    func_?(&(pRVar6->fields)._viewportUpdater,pOVar3);
    RTSceneGizmoCamera::RTSceneGizmoCamera_set_SceneCamera(pRVar6,value_03,(MethodInfo *)0x0);
    if ((List_1_System_Object_ *)pOVar2[9].monitor == (List_1_System_Object_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pOVar2[9].monitor,(Object *)pRVar6,
               MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__Add_RTG__RTSceneGizmoCamera_
              );
    (this->fields)._sceneGizmoCamera = pRVar6;
    func_?(&(this->fields)._sceneGizmoCamera,pRVar6);
    value_00 = (MethodInfo *)func_?(TypeInfo__RTG__SceneGizmoMidCap);
    method_01 = value_00;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
      func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
      func_?(&MethodInfo__RTG__SceneGizmoMidCap__OnGizmoHandlePicked_RTG__Gizmo__int_);
      func_?(&MethodInfo__RTG__SceneGizmoMidCap__OnGizmoPreUpdateBegin_RTG__Gizmo_);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__GizmoCap3D);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_01);
    value_00->invoker_method = (InvokerMethod)this;
    func_?(&value_00->invoker_method,this);
    pGVar7 = (this->fields)._._gizmo;
    pGVar8 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
    GizmoCap3D::GizmoCap3D__ctor(pGVar8,pGVar7,1,(MethodInfo *)0x0);
    method_01->name = (char *)pGVar8;
    func_?(&method_01->name,pGVar8);
    if ((this->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSVar9 = (this->fields)._lookAndFeel;
      if (pSVar9 == (SceneGizmoLookAndFeel *)0x0) goto code_?;
    }
    else {
      pSVar9 = (this->fields)._sharedLookAndFeel;
    }
    pGVar8 = (GizmoCap3D *)method_01->name;
    if (pGVar8 == (GizmoCap3D *)0x0) goto code_?;
    pGVar10 = (pSVar9->fields)._midCapLookAndFeel;
    (pGVar8->fields)._sharedLookAndFeel = pGVar10;
    func_?(&(pGVar8->fields)._sharedLookAndFeel,pGVar10);
    pGVar7 = (this->fields)._._gizmo;
    value_01 = (GizmoPreHandlePickedHandler *)
               func_?(TypeInfo__RTG__GizmoPreHandlePickedHandler);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              ((EventHandler_1_Object_ *)value_01,(Object *)method_01,
               MethodInfo__RTG__SceneGizmoMidCap__OnGizmoHandlePicked_RTG__Gizmo__int_,
               (MethodInfo *)0x0);
    if (pGVar7 == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_add_PreHandlePicked(pGVar7,value_01,(MethodInfo *)0x0);
    pGVar7 = (this->fields)._._gizmo;
    value_02 = (GizmoPreUpdateBeginHandler *)
               func_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_02,(Object *)method_01,
               MethodInfo__RTG__SceneGizmoMidCap__OnGizmoPreUpdateBegin_RTG__Gizmo_,
               (MethodInfo *)0x0);
    if (pGVar7 == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_add_PreUpdateBegin(pGVar7,value_02,(MethodInfo *)0x0);
    (this->fields)._midAxisHandle = (SceneGizmoMidCap *)method_01;
    func_?(&(this->fields)._midAxisHandle,method_01);
    pLVar11 = (this->fields)._renderSortedHandles;
    if (pLVar11 == (List_1_RTG_SceneGizmoCap_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar11,(Object *)(this->fields)._midAxisHandle,
               MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__Add_RTG__SceneGizmoCap_
              );
    piVar12 = (int *)func_?(TypeInfo__RTG__AxisDescriptor,6);
    pAVar13 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar13,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    if (piVar12 == (int *)0x0) goto code_?;
    if ((pAVar13 != (AxisDescriptor *)0x0) &&
       (iVar14 = func_?(pAVar13,*(undefined4 *)(*piVar12 + 0x20)), iVar14 == 0))
    goto code_?;
    if (piVar12[3] == 0) goto code_?;
    piVar12[4] = (int)pAVar13;
    func_?(piVar12 + 4,pAVar13);
    pAVar13 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar13,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    if ((pAVar13 != (AxisDescriptor *)0x0) &&
       (iVar14 = func_?(pAVar13,*(undefined4 *)(*piVar12 + 0x20)), iVar14 == 0))
    goto code_?;
    if ((uint)piVar12[3] < 2) goto code_?;
    piVar12[5] = (int)pAVar13;
    func_?(piVar12 + 5,pAVar13);
    pAVar13 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar13,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    if ((pAVar13 != (AxisDescriptor *)0x0) &&
       (iVar14 = func_?(pAVar13,*(undefined4 *)(*piVar12 + 0x20)), iVar14 == 0))
    goto code_?;
    if ((uint)piVar12[3] < 3) goto code_?;
    piVar12[6] = (int)pAVar13;
    func_?(piVar12 + 6,pAVar13);
    pAVar13 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar13,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
    if ((pAVar13 != (AxisDescriptor *)0x0) &&
       (iVar14 = func_?(pAVar13,*(undefined4 *)(*piVar12 + 0x20)), iVar14 == 0))
    goto code_?;
    if ((uint)piVar12[3] < 4) goto code_?;
    piVar12[7] = (int)pAVar13;
    func_?(piVar12 + 7,pAVar13);
    pAVar13 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar13,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
    if ((pAVar13 != (AxisDescriptor *)0x0) &&
       (iVar14 = func_?(pAVar13,*(undefined4 *)(*piVar12 + 0x20)), iVar14 == 0))
    goto code_?;
    if ((uint)piVar12[3] < 5) goto code_?;
    piVar12[8] = (int)pAVar13;
    func_?(piVar12 + 8,pAVar13);
    pAVar13 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar13,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
    if ((pAVar13 == (AxisDescriptor *)0x0) ||
       (iVar14 = func_?(pAVar13,*(undefined4 *)(*piVar12 + 0x20)), iVar14 != 0)) {
      if ((uint)piVar12[3] < 6) goto code_?;
      piVar12[9] = (int)pAVar13;
      func_?(piVar12 + 9,pAVar13);
      iVar14 = func_?(TypeInfo__System__Int32,6);
      if (iVar14 != 0) {
        if (((((*(int *)(iVar14 + 0xc) == 0) ||
              (*(undefined4 *)(iVar14 + 0x10) = 2, *(uint *)(iVar14 + 0xc) < 2)) ||
             (*(undefined4 *)(iVar14 + 0x14) = 3, *(uint *)(iVar14 + 0xc) < 3)) ||
            ((*(undefined4 *)(iVar14 + 0x18) = 4, *(uint *)(iVar14 + 0xc) < 4 ||
             (*(undefined4 *)(iVar14 + 0x1c) = 5, *(uint *)(iVar14 + 0xc) < 5)))) ||
           (*(undefined4 *)(iVar14 + 0x20) = 6, *(uint *)(iVar14 + 0xc) < 6)) goto code_?;
        *(undefined4 *)(iVar14 + 0x24) = 7;
        iVar15 = 0x10;
        for (uVar16 = 0; (int)uVar16 < piVar12[3]; uVar16 = uVar16 + 1) {
          pSVar17 = (this->fields)._axesHandles;
          if ((*(uint *)(iVar14 + 0xc) <= uVar16) ||
             (id = *(int32_t *)(iVar14 + iVar15), (uint)piVar12[3] <= uVar16))
          goto code_?;
          pAVar13 = *(AxisDescriptor **)(iVar15 + (int)piVar12);
          this_03 = (SceneGizmoAxisCap *)func_?(TypeInfo__RTG__SceneGizmoAxisCap);
          SceneGizmoAxisCap::SceneGizmoAxisCap__ctor(this_03,this,id,pAVar13,(MethodInfo *)0x0);
          if (pSVar17 == (SceneGizmoAxisCap__Array *)0x0) goto code_?;
          if ((this_03 != (SceneGizmoAxisCap *)0x0) &&
             (iVar18 = func_?(this_03,(pSVar17->klass->_0).element_class), iVar18 == 0))
          goto code_?;
          if (pSVar17->max_length <= uVar16) goto code_?;
          *(SceneGizmoAxisCap **)((int)pSVar17->vector + iVar15 + -0x10) = this_03;
          func_?((int)pSVar17->vector + iVar15 + -0x10,this_03);
          pSVar17 = (this->fields)._axesHandles;
          if (pSVar17 == (SceneGizmoAxisCap__Array *)0x0) goto code_?;
          if (pSVar17->max_length <= uVar16) goto code_?;
          pLVar11 = (this->fields)._renderSortedHandles;
          if (pLVar11 == (List_1_RTG_SceneGizmoCap_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar11,
                     *(Object **)((int)pSVar17->vector + iVar15 + -0x10),
                     MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__Add_RTG__SceneGizmoCap_
                    );
          iVar15 = iVar15 + 4;
        }
        this_04 = (SceneGizmoCamPrjSwitchLabel *)
                  func_?(TypeInfo__RTG__SceneGizmoCamPrjSwitchLabel);
        SceneGizmoCamPrjSwitchLabel::SceneGizmoCamPrjSwitchLabel__ctor
                  (this_04,this,(MethodInfo *)0x0);
        (this->fields)._camPrjSwitchLabel = this_04;
        func_?(&(this->fields)._camPrjSwitchLabel,this_04);
        pGVar7 = (this->fields)._._gizmo;
        if (((pGVar7 != (Gizmo *)0x0) &&
            (pRVar6 = (this->fields)._sceneGizmoCamera, pRVar6 != (RTSceneGizmoCamera *)0x0)) &&
           (pGVar19 = (pGVar7->fields)._transform, pGVar19 != (GizmoTransform *)0x0)) {
          GizmoTransform::GizmoTransform_set_Position3D
                    (pGVar19,(pRVar6->fields)._lookAtPoint,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._._gizmo;
          if (pGVar7 != (Gizmo *)0x0) {
            pGVar19 = (pGVar7->fields)._transform;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Quaternion);
              cRam_? = '\x01';
            }
            if (pGVar19 != (GizmoTransform *)0x0) {
              GizmoTransform::GizmoTransform_set_Rotation3D
                        (pGVar19,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion
                         ,(MethodInfo *)0x0);
              pGVar7 = (this->fields)._._gizmo;
              if ((pGVar7 != (Gizmo *)0x0) &&
                 (pPVar20 = (pGVar7->fields)._genericHoverPriority, pPVar20 != (Priority *)0x0)) {
                Priority::Priority_MakeHighest(pPVar20,(MethodInfo *)0x0);
                pGVar7 = (this->fields)._._gizmo;
                if ((pGVar7 != (Gizmo *)0x0) &&
                   (pPVar20 = (pGVar7->fields)._hoverPriority2D, pPVar20 != (Priority *)0x0)) {
                  Priority::Priority_MakeHighest(pPVar20,(MethodInfo *)0x0);
                  pGVar7 = (this->fields)._._gizmo;
                  if ((pGVar7 != (Gizmo *)0x0) &&
                     (pPVar20 = (pGVar7->fields)._hoverPriority3D, pPVar20 != (Priority *)0x0)) {
                    Priority::Priority_MakeHighest(pPVar20,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnGUI() */

void Assembly-CSharp.dll::RTG::SceneGizmo::SceneGizmo_OnGUI(SceneGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._camPrjSwitchLabel;
  if (pSVar1 != (SceneGizmoCamPrjSwitchLabel *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__GUIEx);
      func_?(&TypeInfo__UnityEngine__GUI);
      func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pSVar2 = (pSVar1->fields)._sceneGizmo;
    if (pSVar2 == (SceneGizmo *)0x0) goto code_?;
    if ((pSVar2->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      this_02 = (pSVar2->fields)._lookAndFeel;
    }
    else {
      this_02 = (pSVar2->fields)._sharedLookAndFeel;
    }
    if (((pSVar2->fields)._sceneGizmoCamera == (RTSceneGizmoCamera *)0x0) ||
       (this_02 == (SceneGizmoLookAndFeel *)0x0)) goto code_?;
    if ((this_02->fields)._isCamPrjSwitchLabelVisible == 0) {
      return;
    }
    x = (((((pSVar1->fields)._sceneGizmo)->fields)._sceneGizmoCamera)->fields)._sceneCamera;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar3 == (Object *)0x0) goto code_?;
    this_03 = (Camera *)pOVar3[4].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)this_03,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pRVar5 = (RTFocusCamera *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (pRVar5 == (RTFocusCamera *)0x0) goto code_?;
      this_03 = (Camera *)&UNK_?;
      bVar4 = RTFocusCamera::RTFocusCamera_get_IsDoingProjectionSwitch(pRVar5,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                               (this_02,(MethodInfo *)0x0);
        texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                              (this_02,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pRVar5 = (RTFocusCamera *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (pRVar5 == (RTFocusCamera *)0x0) goto code_?;
        CVar7 = RTFocusCamera::RTFocusCamera_get_PrjSwitchTransitionType(pRVar5,(MethodInfo *)0x0)
        ;
        if (CVar7 == CameraPrjSwitchTransition_Type__Enum_ToPerspective) {
          pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                                 (this_02,(MethodInfo *)0x0);
          texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                                (this_02,(MethodInfo *)0x0);
        }
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                            (0.0,(this_02->fields)._camPrjSwitchLabelTint.a,1.0,0.0,
                             (MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                            (0.0,0.0,1.0,(this_02->fields)._camPrjSwitchLabelTint.a,
                             (MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pRVar5 = (RTFocusCamera *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar5 == (RTFocusCamera *)0x0) ||
           (fVar8 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar5,(MethodInfo *)0x0),
           this_01 == (AnimationCurve *)0x0)) goto code_?;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_01,fVar8,(MethodInfo *)0x0);
        pRVar5 = (RTFocusCamera *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar5 == (RTFocusCamera *)0x0) ||
           (fVar9 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar5,(MethodInfo *)0x0),
           this_00 == (AnimationCurve *)0x0)) goto code_?;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_00,fVar9,(MethodInfo *)0x0);
        pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                            ((Color *)&stack0xffffffb0,(this_02->fields)._camPrjSwitchLabelTint,
                             fVar9,(MethodInfo *)0x0);
        puStack_11 = (undefined *)pCVar10->r;
        fVar9 = pCVar10->g;
        fVar12 = pCVar10->b;
        fVar13 = pCVar10->a;
        if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        color.g = fVar9;
        color.r = (float)puStack_11;
        color.b = fVar12;
        color.a = fVar13;
        GUIEx::GUIEx_PushColor(color,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_FromTexture2D((Rect *)&stack0xffffffb0,texture2D,(MethodInfo *)0x0)
        ;
        puStack_11 = (undefined *)pRVar14->m_XMin;
        fVar9 = pRVar14->m_YMin;
        fVar12 = pRVar14->m_Width;
        fVar13 = pRVar14->m_Height;
        if (this_03 == (Camera *)0x0) goto code_?;
        pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&stack0xffffffb0,this_03,(MethodInfo *)0x0);
        rect.m_YMin = fVar9;
        rect.m_XMin = (float)puStack_11;
        rect.m_Width = fVar12;
        rect.m_Height = fVar13;
        pRVar14 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffb0,rect,*pRVar14,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffb0,*pRVar14,(MethodInfo *)0x0);
        puStack_11 = (undefined *)pRVar14->m_XMin;
        fVar9 = pRVar14->m_Width;
        fVar12 = pRVar14->m_Height;
        fVar15 = fVar9 * _UNK_? + (float)puStack_11;
        fVar13 = fVar9;
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar17 = (pSVar1->fields)._labelQuad;
        if (pQVar17 == (QuadShape2D *)0x0) goto code_?;
        puStack_11 = (undefined *)(fVar15 - fVar9 * _UNK_?);
        fVar9 = ((float)(iVar16 + -1) - (pQVar17->fields)._center.y) - fVar12 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        position.m_YMin = fVar9;
        position.m_XMin = (float)puStack_11;
        position.m_Width = fVar13;
        position.m_Height = fVar12;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position,(Texture *)texture2D,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
        pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                            ((Color *)&stack0xffffffb0,(this_02->fields)._camPrjSwitchLabelTint,
                             fVar8,(MethodInfo *)0x0);
        GUIEx::GUIEx_PushColor(*pCVar10,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_FromTexture2D
                            ((Rect *)&stack0xffffffb0,pTStack_6,(MethodInfo *)0x0);
        fVar8 = pRVar14->m_Height;
        pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&puStack_11,this_03,(MethodInfo *)0x0);
        uVar18 = pRVar14->m_Width;
        uVar19 = pRVar14->m_Height;
        rect_00.m_YMin = (float)uVar19;
        rect_00.m_XMin = (float)uVar18;
        rect_00.m_Width = 0.0;
        rect_00.m_Height = fVar8;
        pRVar14 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffb0,rect_00,*pRVar14,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffb0,*pRVar14,(MethodInfo *)0x0);
        puStack_11 = (undefined *)pRVar14->m_XMin;
        fVar9 = pRVar14->m_Width;
        fVar8 = pRVar14->m_Height;
        fVar13 = fVar9 * _UNK_? + (float)puStack_11;
        fVar12 = fVar9;
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar17 = (pSVar1->fields)._labelQuad;
        if (pQVar17 == (QuadShape2D *)0x0) goto code_?;
        puStack_11 = (undefined *)(fVar13 - fVar9 * _UNK_?);
        fVar9 = ((float)(iVar16 + -1) - (pQVar17->fields)._center.y) - fVar8 * _UNK_?;
        goto code_?;
      }
    }
    if (this_03 != (Camera *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (this_03,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                               (this_02,(MethodInfo *)0x0);
      }
      else {
        pTStack_6 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                               (this_02,(MethodInfo *)0x0);
      }
      fVar8 = (this_02->fields)._camPrjSwitchLabelTint.r;
      fVar9 = (this_02->fields)._camPrjSwitchLabelTint.g;
      fVar12 = (this_02->fields)._camPrjSwitchLabelTint.b;
      fVar13 = (this_02->fields)._camPrjSwitchLabelTint.a;
      if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      color_00.g = fVar9;
      color_00.r = fVar8;
      color_00.b = fVar12;
      color_00.a = fVar13;
      GUIEx::GUIEx_PushColor(color_00,(MethodInfo *)0x0);
      pRVar14 = RectEx::RectEx_FromTexture2D((Rect *)&stack0xffffffb0,pTStack_6,(MethodInfo *)0x0);
      fVar8 = pRVar14->m_Height;
      pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                          ((Rect *)&puStack_11,this_03,(MethodInfo *)0x0);
      uVar20 = pRVar14->m_Width;
      uVar21 = pRVar14->m_Height;
      rect_01.m_YMin = (float)uVar21;
      rect_01.m_XMin = (float)uVar20;
      rect_01.m_Width = 0.0;
      rect_01.m_Height = fVar8;
      pRVar14 = RectEx::RectEx_PlaceBelowCenterHrz
                          ((Rect *)&stack0xffffffb0,rect_01,*pRVar14,(MethodInfo *)0x0);
      pRVar14 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffb0,*pRVar14,(MethodInfo *)0x0);
      puStack_11 = (undefined *)pRVar14->m_XMin;
      fVar9 = pRVar14->m_Width;
      fVar8 = pRVar14->m_Height;
      fVar13 = fVar9 * _UNK_? + (float)puStack_11;
      fVar12 = fVar9;
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0)
      ;
      pQVar17 = (pSVar1->fields)._labelQuad;
      if (pQVar17 != (QuadShape2D *)0x0) {
        puStack_11 = (undefined *)(fVar13 - fVar9 * _UNK_?);
        fVar9 = ((float)(iVar16 + -1) - (pQVar17->fields)._center.y) - fVar8 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
code_?:
        position_00.m_YMin = fVar9;
        position_00.m_XMin = (float)puStack_11;
        position_00.m_Width = fVar12;
        position_00.m_Height = fVar8;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position_00,(Texture *)pTStack_6,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::SceneGizmo::SceneGizmo_OnGizmoRender
               (SceneGizmo *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pIStack_3 = (Il2CppType *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::SceneGizmoCap>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SceneGizmoCap>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SceneGizmoCap>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SceneGizmoCap>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__Sort_System__Comparison<RTG::SceneGizmoCap>_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__RTG__SceneGizmo____c__DisplayClass20_0___OnGizmoRender_b__0_RTG__SceneGizmoCap__RTG__SceneGizmoCap_
                   );
    func_?(&TypeInfo__RTG__SceneGizmo____c__DisplayClass20_0);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = TypeInfo__RTG__SceneGizmo____c__DisplayClass20_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pRVar6 = (this->fields)._sceneGizmoCamera;
  if (pRVar6 != (RTSceneGizmoCamera *)0x0) {
    y = (pRVar6->fields)._camera;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)camera,(Object_1 *)y,(MethodInfo *)0x0);
    if (bVar7 != 0) {
code_?:
      *unaff_FS_OFFSET = pIStack_3;
      return;
    }
    pRVar6 = (this->fields)._sceneGizmoCamera;
    if ((pRVar6 != (RTSceneGizmoCamera *)0x0) &&
       (this_00 = (pRVar6->fields)._transform, this_00 != (Transform *)0x0)) {
      method_01 = (MethodInfo *)&LStack_8._index;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)method_01,this_00,(MethodInfo *)0x0);
      fVar10 = pVVar9->y;
      pOVar11 = (Object__Class *)pVVar9->z;
      if (value != (Object *)0x0) {
        value[1].klass = (Object__Class *)pVVar9->x;
        value[1].monitor = (MonitorData *)fVar10;
        value[2].klass = pOVar11;
        this_01 = (this->fields)._renderSortedHandles;
        LStack_8._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             TypeInfo__System__Comparison<RTG::SceneGizmoCap>;
        this_03 = (Comparison_1_Object_ *)func_?();
        mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                  (this_03,value,
                   MethodInfo__RTG__SceneGizmo____c__DisplayClass20_0___OnGizmoRender_b__0_RTG__SceneGizmoCap__RTG__SceneGizmoCap_
                   ,(MethodInfo *)0x0);
        if (this_01 != (List_1_RTG_SceneGizmoCap_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Sort_1
                    ((List_1_System_Object_ *)this_01,this_03,
                     MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__Sort_System__Comparison<RTG::SceneGizmoCap>_
                    );
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields)._renderSortedHandles;
          if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_8,this_02,
                                MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__GetEnumerator__
                               );
            RVar13 = pLVar12->_current;
            LStack_8._version = 0;
            uStack_1 = 1;
            LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
            while( true ) {
              bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SceneGizmoCap>__MoveNext__
                                );
              if (bVar7 == 0) break;
              if ((this->fields)._sceneGizmoCamera == (RTSceneGizmoCamera *)0x0)
              goto code_?;
              if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
              (**(code **)(*(int *)RVar13 + 0xe0))(RVar13);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffc8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SceneGizmoCap>__Dispose__
                       ,method_01);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* SceneGizmo() */

void Assembly-CSharp.dll::RTG::SceneGizmo::SceneGizmo__ctor(SceneGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>);
    func_?(&TypeInfo__RTG__SceneGizmoAxisCap);
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  pSVar1 = (SceneGizmoAxisCap__Array *)func_?(TypeInfo__RTG__SceneGizmoAxisCap,6);
  (this->fields)._axesHandles = pSVar1;
  func_?(&(this->fields)._axesHandles,pSVar1);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,7,MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__List_int_
            );
  (this->fields)._renderSortedHandles = (List_1_RTG_SceneGizmoCap_ *)this_00;
  func_?(&(this->fields)._renderSortedHandles,this_00);
  this_01 = (SceneGizmoLookAndFeel *)func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
  SceneGizmoLookAndFeel::SceneGizmoLookAndFeel__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_01;
  func_?(&(this->fields)._lookAndFeel,this_01);
  GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* SceneGizmoLookAndFeel get_LookAndFeel() */

SceneGizmoLookAndFeel *
Assembly-CSharp.dll::RTG::SceneGizmo::SceneGizmo_get_LookAndFeel
          (SceneGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (SceneGizmoLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Camera get_SceneCamera() */

Camera * Assembly-CSharp.dll::RTG::SceneGizmo::SceneGizmo_get_SceneCamera
                   (SceneGizmo *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pRVar2 = (this->fields)._sceneGizmoCamera;
  if (pRVar2 != (RTSceneGizmoCamera *)0x0) {
    return (pRVar2->fields)._sceneCamera;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pCVar6 = (Camera *)(*pcVar5)();
  return pCVar6;
}

