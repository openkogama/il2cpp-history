
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
    value_01 = (Camera *)pOVar3[4].monitor;
    method_03 = TypeInfo__RTG__SceneGizmoCamViewportUpdater;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
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
    ppIVar7 = &(pRVar6->fields)._viewportUpdater;
    *ppIVar7 = (ISceneGizmoCamViewportUpdater *)pOVar3;
    func_?(ppIVar7,pOVar3);
    pMVar8 = (MethodInfo *)0x0;
    RTSceneGizmoCamera::RTSceneGizmoCamera_set_SceneCamera(pRVar6,value_01,(MethodInfo *)0x0);
    if ((List_1_System_Object_ *)pOVar2[9].monitor == (List_1_System_Object_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pOVar2[9].monitor,(Object *)pRVar6,
               MethodInfo__System__Collections__Generic__List<RTG::RTSceneGizmoCamera>__Add_RTG__RTSceneGizmoCamera_
              );
    ppRVar9 = &(this->fields)._sceneGizmoCamera;
    *ppRVar9 = pRVar6;
    func_?(ppRVar9,pRVar6);
    pOVar2 = (Object *)func_?(TypeInfo__RTG__SceneGizmoMidCap);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler,pOVar2);
      func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
      func_?(&MethodInfo__RTG__SceneGizmoMidCap__OnGizmoHandlePicked_RTG__Gizmo__int_);
      func_?(&MethodInfo__RTG__SceneGizmoMidCap__OnGizmoPreUpdateBegin_RTG__Gizmo_);
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
    UnsafeUtility_SizeOf_26((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__GizmoCap3D);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar2,ExceptionArgument__Enum_obj,in_stack_10);
    object = (SceneGizmoMidCap *)(pOVar2 + 1);
    object->klass = (SceneGizmoMidCap__Class *)this;
    func_?(object,this);
    pGVar11 = (this->fields)._._gizmo;
    handleId = TypeInfo__RTG__GizmoCap3D;
    pGVar12 = (GizmoCap3D *)func_?();
    GizmoCap3D::GizmoCap3D__ctor(pGVar12,pGVar11,(int32_t)handleId,(MethodInfo *)0x0);
    ppGVar13 = &(object->fields)._._cap;
    *ppGVar13 = pGVar12;
    func_?(ppGVar13,pGVar12);
    pSVar14 = (this->fields)._sharedLookAndFeel;
    if (((pSVar14 == (SceneGizmoLookAndFeel *)0x0) &&
        (pSVar14 = (this->fields)._lookAndFeel, pSVar14 == (SceneGizmoLookAndFeel *)0x0)) ||
       (pGVar12 = (object->fields)._._cap, pGVar12 == (GizmoCap3D *)0x0)) goto code_?;
    pGVar15 = (pSVar14->fields)._midCapLookAndFeel;
    ppGVar16 = &(pGVar12->fields)._sharedLookAndFeel;
    *ppGVar16 = pGVar15;
    func_?(ppGVar16,pGVar15);
    pGVar11 = (this->fields)._._gizmo;
    pGVar17 = (GizmoPreHandlePickedHandler *)
              func_?(TypeInfo__RTG__GizmoPreHandlePickedHandler);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              ((EventHandler_1_Object_ *)pGVar17,(Object *)object,
               MethodInfo__RTG__SceneGizmoMidCap__OnGizmoHandlePicked_RTG__Gizmo__int_,
               (MethodInfo *)0x0);
    if (pGVar11 == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_add_PreHandlePicked(pGVar11,pGVar17,(MethodInfo *)0x0);
    pGVar11 = (this->fields)._._gizmo;
    pGVar18 = (GizmoPreUpdateBeginHandler *)
              func_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)pGVar18,(Object *)object,
               MethodInfo__RTG__SceneGizmoMidCap__OnGizmoPreUpdateBegin_RTG__Gizmo_,
               (MethodInfo *)0x0);
    if (pGVar11 == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_add_PreUpdateBegin(pGVar11,pGVar18,(MethodInfo *)0x0);
    ppSVar19 = &(this->fields)._midAxisHandle;
    *ppSVar19 = object;
    func_?(ppSVar19,object);
    pLVar20 = (this->fields)._renderSortedHandles;
    if (pLVar20 == (List_1_RTG_SceneGizmoCap_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar20,(Object *)*ppSVar19,
               MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__Add_RTG__SceneGizmoCap_
              );
    piVar21 = (int *)func_?(TypeInfo__RTG__AxisDescriptor,6);
    pAVar22 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar22,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    if (piVar21 == (int *)0x0) goto code_?;
    if ((pAVar22 != (AxisDescriptor *)0x0) &&
       (iVar23 = func_?(pAVar22,*(undefined4 *)(*piVar21 + 0x20)), iVar23 == 0))
    goto code_?;
    if (piVar21[3] == 0) goto code_?;
    piVar21[4] = (int)pAVar22;
    func_?(piVar21 + 4,pAVar22);
    pAVar22 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar22,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    if ((pAVar22 != (AxisDescriptor *)0x0) &&
       (iVar23 = func_?(pAVar22,*(undefined4 *)(*piVar21 + 0x20)), iVar23 == 0))
    goto code_?;
    if ((uint)piVar21[3] < 2) goto code_?;
    piVar21[5] = (int)pAVar22;
    func_?(piVar21 + 5,pAVar22);
    pAVar22 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar22,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    if ((pAVar22 != (AxisDescriptor *)0x0) &&
       (iVar23 = func_?(pAVar22,*(undefined4 *)(*piVar21 + 0x20)), iVar23 == 0))
    goto code_?;
    if ((uint)piVar21[3] < 3) goto code_?;
    piVar21[6] = (int)pAVar22;
    func_?(piVar21 + 6,pAVar22);
    pAVar22 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar22,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
    if ((pAVar22 != (AxisDescriptor *)0x0) &&
       (iVar23 = func_?(pAVar22,*(undefined4 *)(*piVar21 + 0x20)), iVar23 == 0))
    goto code_?;
    if ((uint)piVar21[3] < 4) goto code_?;
    piVar21[7] = (int)pAVar22;
    func_?(piVar21 + 7,pAVar22);
    pAVar22 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(pAVar22,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
    if ((pAVar22 != (AxisDescriptor *)0x0) &&
       (iVar23 = func_?(pAVar22,*(undefined4 *)(*piVar21 + 0x20)), iVar23 == 0))
    goto code_?;
    if ((uint)piVar21[3] < 5) goto code_?;
    piVar21[8] = (int)pAVar22;
    func_?(piVar21 + 8,pAVar22);
    pAVar22 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    method_00 = (MethodInfo *)0x2;
    AxisDescriptor::AxisDescriptor__ctor(pAVar22,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
    if ((pAVar22 == (AxisDescriptor *)0x0) ||
       (iVar23 = func_?(pAVar22,*(undefined4 *)(*piVar21 + 0x20)), iVar23 != 0)) {
      if ((uint)piVar21[3] < 6) goto code_?;
      method_02 = (MethodInfo *)(piVar21 + 9);
      method_02->methodPointer = (Il2CppMethodPointer)pAVar22;
      func_?(method_02,pAVar22);
      method_01 = TypeInfo__System__Int32;
      iVar24 = func_?(TypeInfo__System__Int32,6);
      iVar23 = iVar24;
      iVar25 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_SizeOf_46((MethodInfo *)0x0);
      if (iVar24 != 0) {
        puVar26 = (uint *)(iVar24 + 0xc);
        if (*(int *)(iVar24 + 0xc) == 0) goto code_?;
        *(int32_t *)(iVar24 + 0x10) = iVar25;
        iVar25 = mscorlib.dll::System::ValueTuple`3[Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType]::
                 ValueTuple_3_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Runtime_CompilerServices_ITuple_get_Length
                           ((ValueTuple_3_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                             *)0x0,method_00);
        if (*puVar26 < 2) goto code_?;
        *(int32_t *)(iVar24 + 0x14) = iVar25;
        iVar25 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_SizeOf_36((MethodInfo *)0x0);
        if (*puVar26 < 3) goto code_?;
        *(int32_t *)(iVar24 + 0x18) = iVar25;
        iVar25 = mscorlib.dll::System::ValueTuple`5[Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                 __Il2CppFullySharedGenericType]::
                 ValueTuple_5_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Runtime_CompilerServices_ITuple_get_Length
                           ((ValueTuple_5_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                             *)0x0,pMVar8);
        if (*puVar26 < 4) goto code_?;
        *(int32_t *)(iVar24 + 0x1c) = iVar25;
        EVar27 = System.Core.dll::System::Linq::Expressions::MethodCallExpression::
                 MethodCallExpression_get_NodeType
                           ((MethodCallExpression *)0x0,(MethodInfo *)method_01);
        if (*puVar26 < 5) goto code_?;
        *(ExpressionType__Enum_1 *)(iVar24 + 0x20) = EVar27;
        XVar28 = System.Xml.Linq.dll::System::Xml::Linq::XProcessingInstruction::
                 XProcessingInstruction_get_NodeType((XProcessingInstruction *)0x0,method_02);
        if (*puVar26 < 6) goto code_?;
        *(XmlNodeType__Enum *)(iVar24 + 0x24) = XVar28;
        iVar24 = 0x10;
        iVar23 = iVar23 - (int)piVar21;
        for (uVar29 = 0; (int)uVar29 < piVar21[3]; uVar29 = uVar29 + 1) {
          pSVar30 = (this->fields)._axesHandles;
          if (*puVar26 <= uVar29) goto code_?;
          iVar25 = *(int32_t *)(iVar23 + iVar24 + (int)piVar21);
          if ((uint)piVar21[3] <= uVar29) goto code_?;
          pAVar22 = *(AxisDescriptor **)(iVar24 + (int)piVar21);
          this_03 = (SceneGizmoAxisCap *)func_?(TypeInfo__RTG__SceneGizmoAxisCap);
          SceneGizmoAxisCap::SceneGizmoAxisCap__ctor(this_03,this,iVar25,pAVar22,(MethodInfo *)0x0);
          if (pSVar30 == (SceneGizmoAxisCap__Array *)0x0) goto code_?;
          if ((this_03 != (SceneGizmoAxisCap *)0x0) &&
             (iVar31 = func_?(this_03,(pSVar30->klass->_0).element_class), iVar31 == 0))
          goto code_?;
          if (pSVar30->max_length <= uVar29) goto code_?;
          *(SceneGizmoAxisCap **)((int)pSVar30->vector + iVar24 + -0x10) = this_03;
          func_?((int)pSVar30->vector + iVar24 + -0x10,this_03);
          pSVar30 = (this->fields)._axesHandles;
          if (pSVar30 == (SceneGizmoAxisCap__Array *)0x0) goto code_?;
          if (pSVar30->max_length <= uVar29) goto code_?;
          pLVar20 = (this->fields)._renderSortedHandles;
          if (pLVar20 == (List_1_RTG_SceneGizmoCap_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar20,
                     *(Object **)((int)pSVar30->vector + iVar24 + -0x10),
                     MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__Add_RTG__SceneGizmoCap_
                    );
          iVar24 = iVar24 + 4;
        }
        value_00 = (SceneGizmoCamPrjSwitchLabel *)
                   func_?(TypeInfo__RTG__SceneGizmoCamPrjSwitchLabel);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
          func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
          func_?(&TypeInfo__RTG__QuadShape2D);
          func_?(&
                          MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoHandlePicked_RTG__Gizmo__int_
                         );
          func_?(&
                          MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoPreUpdateBegin_RTG__Gizmo_
                         );
          cRam_? = '\x01';
        }
        this_04 = (QuadShape2D *)func_?(TypeInfo__RTG__QuadShape2D);
        QuadShape2D::QuadShape2D__ctor(this_04,(MethodInfo *)0x0);
        pMVar8 = (MethodInfo *)&(value_00->fields)._labelQuad;
        *(QuadShape2D **)pMVar8 = this_04;
        func_?(pMVar8,this_04);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar8);
        pSVar32 = &value_00->fields;
        pSVar32->_sceneGizmo = this;
        func_?(pSVar32,this);
        if (pSVar32->_sceneGizmo != (SceneGizmo *)0x0) {
          pGVar11 = (pSVar32->_sceneGizmo->fields)._._gizmo;
          iVar25 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_SizeOf_10((MethodInfo *)0x0);
          if (pGVar11 != (Gizmo *)0x0) {
            pGVar33 = Gizmo::Gizmo_CreateHandle(pGVar11,iVar25,(MethodInfo *)0x0);
            ppGVar34 = &(value_00->fields)._handle;
            *ppGVar34 = pGVar33;
            func_?(ppGVar34,pGVar33);
            if (*ppGVar34 != (GizmoHandle *)0x0) {
              GizmoHandle::GizmoHandle_Add2DShape
                        (*ppGVar34,(Shape2D *)(value_00->fields)._labelQuad,(MethodInfo *)0x0);
              pGVar11 = (this->fields)._._gizmo;
              pGVar18 = (GizmoPreUpdateBeginHandler *)
                        func_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)pGVar18,
                         (Object *)value_00,
                         MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoPreUpdateBegin_RTG__Gizmo_
                         ,(MethodInfo *)0x0);
              if (pGVar11 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PreUpdateBegin(pGVar11,pGVar18,(MethodInfo *)0x0);
                pGVar11 = (this->fields)._._gizmo;
                pGVar17 = (GizmoPreHandlePickedHandler *)
                          func_?(TypeInfo__RTG__GizmoPreHandlePickedHandler);
                mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                          ((EventHandler_1_Object_ *)pGVar17,(Object *)value_00,
                           MethodInfo__RTG__SceneGizmoCamPrjSwitchLabel__OnGizmoHandlePicked_RTG__Gizmo__int_
                           ,(MethodInfo *)0x0);
                if (pGVar11 != (Gizmo *)0x0) {
                  Gizmo::Gizmo_add_PreHandlePicked(pGVar11,pGVar17,(MethodInfo *)0x0);
                  ppSVar35 = &(this->fields)._camPrjSwitchLabel;
                  *ppSVar35 = value_00;
                  func_?(ppSVar35,value_00);
                  pGVar11 = (this->fields)._._gizmo;
                  if (((pGVar11 != (Gizmo *)0x0) &&
                      (pRVar6 = (this->fields)._sceneGizmoCamera,
                      pRVar6 != (RTSceneGizmoCamera *)0x0)) &&
                     (pGVar36 = (pGVar11->fields)._transform, pGVar36 != (GizmoTransform *)0x0)) {
                    GizmoTransform::GizmoTransform_set_Position3D
                              (pGVar36,(pRVar6->fields)._lookAtPoint,(MethodInfo *)0x0);
                    pGVar11 = (this->fields)._._gizmo;
                    if (pGVar11 != (Gizmo *)0x0) {
                      pGVar36 = (pGVar11->fields)._transform;
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__UnityEngine__Quaternion);
                        cRam_? = '\x01';
                      }
                      if (pGVar36 != (GizmoTransform *)0x0) {
                        GizmoTransform::GizmoTransform_set_Rotation3D
                                  (pGVar36,TypeInfo__UnityEngine__Quaternion->static_fields->
                                           identityQuaternion,(MethodInfo *)0x0);
                        pGVar11 = (this->fields)._._gizmo;
                        if ((pGVar11 != (Gizmo *)0x0) &&
                           (pPVar37 = (pGVar11->fields)._genericHoverPriority,
                           pPVar37 != (Priority *)0x0)) {
                          Priority::Priority_MakeHighest(pPVar37,(MethodInfo *)0x0);
                          pGVar11 = (this->fields)._._gizmo;
                          if ((pGVar11 != (Gizmo *)0x0) &&
                             (pPVar37 = (pGVar11->fields)._hoverPriority2D,
                             pPVar37 != (Priority *)0x0)) {
                            Priority::Priority_MakeHighest(pPVar37,(MethodInfo *)0x0);
                            pGVar11 = (this->fields)._._gizmo;
                            if ((pGVar11 != (Gizmo *)0x0) &&
                               (pPVar37 = (pGVar11->fields)._hoverPriority3D,
                               pPVar37 != (Priority *)0x0)) {
                              Priority::Priority_MakeHighest(pPVar37,(MethodInfo *)0x0);
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
      goto code_?;
    }
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
    this_04 = (pSVar2->fields)._sharedLookAndFeel;
    if (this_04 == (SceneGizmoLookAndFeel *)0x0) {
      this_04 = (pSVar2->fields)._lookAndFeel;
    }
    pRVar3 = (pSVar2->fields)._sceneGizmoCamera;
    if ((pRVar3 == (RTSceneGizmoCamera *)0x0) ||
       (this_00 = (pRVar3->fields)._camera, this_04 == (SceneGizmoLookAndFeel *)0x0))
    goto code_?;
    if ((this_04->fields)._isCamPrjSwitchLabelVisible == 0) {
      return;
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    x = MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__;
    pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar4 == (Object *)0x0) goto code_?;
    y = (Object_1 *)pOVar4[4].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      x = (MethodInfo *)&UNK_?;
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,y,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pRVar6 = (RTFocusCamera *)
               MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (pRVar6 == (RTFocusCamera *)0x0) goto code_?;
      bVar5 = RTFocusCamera::RTFocusCamera_get_IsDoingProjectionSwitch(pRVar6,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        this_01 = (SceneGizmoLookAndFeel *)
                  SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                            (this_04,(MethodInfo *)0x0);
        texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                              (this_01,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pRVar6 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (pRVar6 == (RTFocusCamera *)0x0) goto code_?;
        CVar7 = RTFocusCamera::RTFocusCamera_get_PrjSwitchTransitionType(pRVar6,(MethodInfo *)0x0);
        if (CVar7 == CameraPrjSwitchTransition_Type__Enum_ToPerspective) {
          this_01 = (SceneGizmoLookAndFeel *)
                    SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                              (this_04,(MethodInfo *)0x0);
          texture2D = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                                (this_04,(MethodInfo *)0x0);
        }
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                            (0.0,(this_04->fields)._camPrjSwitchLabelTint.a,1.0,0.0,
                             (MethodInfo *)0x0);
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_EaseInOut
                            (0.0,0.0,1.0,(this_04->fields)._camPrjSwitchLabelTint.a,
                             (MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pRVar6 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar6 == (RTFocusCamera *)0x0) ||
           (fVar8 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar6,(MethodInfo *)0x0),
           this_03 == (AnimationCurve *)0x0)) goto code_?;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_03,fVar8,(MethodInfo *)0x0);
        pRVar6 = (RTFocusCamera *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pRVar6 == (RTFocusCamera *)0x0) ||
           (fVar9 = RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress(pRVar6,(MethodInfo *)0x0),
           this_02 == (AnimationCurve *)0x0)) goto code_?;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_02,fVar9,(MethodInfo *)0x0);
        pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                            ((Color *)&stack0xffffffdc,(this_04->fields)._camPrjSwitchLabelTint,
                             fVar9,(MethodInfo *)0x0);
        fVar9 = pCVar10->r;
        fVar11 = pCVar10->g;
        fVar12 = pCVar10->b;
        fVar13 = pCVar10->a;
        if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        color.g = fVar11;
        color.r = fVar9;
        color.b = fVar12;
        color.a = fVar13;
        GUIEx::GUIEx_PushColor(color,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_FromTexture2D((Rect *)&stack0xffffffdc,texture2D,(MethodInfo *)0x0)
        ;
        fVar9 = pRVar14->m_XMin;
        fVar11 = pRVar14->m_YMin;
        fVar12 = pRVar14->m_Width;
        fVar13 = pRVar14->m_Height;
        if (this_00 == (Camera *)0x0) goto code_?;
        pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&stack0xffffffcc,this_00,(MethodInfo *)0x0);
        rect.m_YMin = fVar11;
        rect.m_XMin = fVar9;
        rect.m_Width = fVar12;
        rect.m_Height = fVar13;
        pRVar14 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffcc,rect,*pRVar14,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffcc,*pRVar14,(MethodInfo *)0x0);
        fVar9 = pRVar14->m_XMin;
        fVar11 = pRVar14->m_Width;
        fVar12 = pRVar14->m_Height;
        iVar15 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar16 = (pSVar1->fields)._labelQuad;
        if (pQVar16 == (QuadShape2D *)0x0) goto code_?;
        fVar13 = fVar11 * _UNK_?;
        fVar13 = (fVar9 + fVar13) - fVar13;
        fVar9 = ((float)(iVar15 + -1) - (pQVar16->fields)._center.y) - fVar12 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        position.m_YMin = fVar9;
        position.m_XMin = fVar13;
        position.m_Width = fVar11;
        position.m_Height = fVar12;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position,(Texture *)texture2D,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
        pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                            ((Color *)&stack0xffffffcc,(this_04->fields)._camPrjSwitchLabelTint,
                             fVar8,(MethodInfo *)0x0);
        GUIEx::GUIEx_PushColor(*pCVar10,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_FromTexture2D
                            ((Rect *)&stack0xffffffcc,(Texture2D *)this_01,(MethodInfo *)0x0);
        fVar8 = pRVar14->m_XMin;
        fVar9 = pRVar14->m_YMin;
        fVar11 = pRVar14->m_Width;
        fVar12 = pRVar14->m_Height;
        pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                            ((Rect *)&stack0xffffffcc,this_00,(MethodInfo *)0x0);
        rect_00.m_YMin = fVar9;
        rect_00.m_XMin = fVar8;
        rect_00.m_Width = fVar11;
        rect_00.m_Height = fVar12;
        pRVar14 = RectEx::RectEx_PlaceBelowCenterHrz
                            ((Rect *)&stack0xffffffcc,rect_00,*pRVar14,(MethodInfo *)0x0);
        pRVar14 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffcc,*pRVar14,(MethodInfo *)0x0);
        fVar8 = pRVar14->m_Width;
        fVar9 = pRVar14->m_Height;
        puVar17 = &UNK_?;
        iVar15 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        pQVar16 = (pSVar1->fields)._labelQuad;
        if (pQVar16 == (QuadShape2D *)0x0) goto code_?;
        fVar11 = ((float)puVar17 + fVar8 * _UNK_?) - fVar8 * _UNK_?;
        fVar12 = ((float)(iVar15 + -1) - (pQVar16->fields)._center.y) - fVar9 * _UNK_?;
        goto code_?;
      }
    }
    if (this_00 != (Camera *)0x0) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (this_00,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        this_01 = (SceneGizmoLookAndFeel *)
                  SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
                            (this_04,(MethodInfo *)0x0);
      }
      else {
        this_01 = (SceneGizmoLookAndFeel *)
                  SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
                            (this_04,(MethodInfo *)0x0);
      }
      fVar8 = (this_04->fields)._camPrjSwitchLabelTint.r;
      fVar9 = (this_04->fields)._camPrjSwitchLabelTint.g;
      fVar11 = (this_04->fields)._camPrjSwitchLabelTint.b;
      fVar12 = (this_04->fields)._camPrjSwitchLabelTint.a;
      if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      color_00.g = fVar9;
      color_00.r = fVar8;
      color_00.b = fVar11;
      color_00.a = fVar12;
      GUIEx::GUIEx_PushColor(color_00,(MethodInfo *)0x0);
      pRVar14 = RectEx::RectEx_FromTexture2D
                          ((Rect *)&stack0xffffffcc,(Texture2D *)this_01,(MethodInfo *)0x0);
      fVar8 = pRVar14->m_XMin;
      fVar9 = pRVar14->m_YMin;
      fVar11 = pRVar14->m_Width;
      fVar12 = pRVar14->m_Height;
      pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                          ((Rect *)&stack0xffffffcc,this_00,(MethodInfo *)0x0);
      rect_01.m_YMin = fVar9;
      rect_01.m_XMin = fVar8;
      rect_01.m_Width = fVar11;
      rect_01.m_Height = fVar12;
      pRVar14 = RectEx::RectEx_PlaceBelowCenterHrz
                          ((Rect *)&stack0xffffffcc,rect_01,*pRVar14,(MethodInfo *)0x0);
      pRVar14 = RectEx::RectEx_InvertScreenY((Rect *)&stack0xffffffcc,*pRVar14,(MethodInfo *)0x0);
      fVar8 = pRVar14->m_Width;
      fVar9 = pRVar14->m_Height;
      puVar17 = &UNK_?;
      iVar15 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0)
      ;
      if (iRam_? != 0) {
        fVar11 = ((float)puVar17 + fVar8 * _UNK_?) - fVar8 * _UNK_?;
        fVar12 = ((float)(iVar15 + -1) - *(float *)(iRam_? + 0xc)) - fVar9 * _UNK_?;
        if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
code_?:
        position_00.m_YMin = fVar12;
        position_00.m_XMin = fVar11;
        position_00.m_Width = fVar8;
        position_00.m_Height = fVar9;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_DrawTexture
                  (position_00,(Texture *)this_01,(MethodInfo *)0x0);
        GUIEx::GUIEx_PopColor((MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  ppSVar2 = &(this->fields)._axesHandles;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,7,MethodInfo__System__Collections__Generic__List<RTG::SceneGizmoCap>__List_int_
            );
  ppLVar3 = &(this->fields)._renderSortedHandles;
  *ppLVar3 = (List_1_RTG_SceneGizmoCap_ *)this_00;
  func_?(ppLVar3,this_00);
  this_01 = (SceneGizmoLookAndFeel *)func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
  SceneGizmoLookAndFeel::SceneGizmoLookAndFeel__ctor(this_01,(MethodInfo *)0x0);
  ppSVar4 = &(this->fields)._lookAndFeel;
  *ppSVar4 = this_01;
  func_?(ppSVar4,this_01);
  GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* SceneGizmoLookAndFeel get_LookAndFeel() */

SceneGizmoLookAndFeel *
Assembly-CSharp.dll::RTG::SceneGizmo::SceneGizmo_get_LookAndFeel
          (SceneGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedLookAndFeel;
  if (pSVar1 != (SceneGizmoLookAndFeel *)0x0) {
    return pSVar1;
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

