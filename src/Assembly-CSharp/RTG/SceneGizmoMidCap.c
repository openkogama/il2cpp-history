
/* Void OnGizmoHandlePicked(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::SceneGizmoMidCap::SceneGizmoMidCap_OnGizmoHandlePicked
               (SceneGizmoMidCap *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._cap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar1) {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = (RTFocusCamera *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (this_01 == (RTFocusCamera *)0x0) goto code_?;
      RTFocusCamera::RTFocusCamera_PerformProjectionSwitch(this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::SceneGizmoMidCap::SceneGizmoMidCap_OnGizmoPreUpdateBegin
               (SceneGizmoMidCap *this,Gizmo *gizmo,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3DLookAndFeel *)&stack0xfffffffc;
  pSVar2 = (this->fields)._._sceneGizmo;
  if (pSVar2 != (SceneGizmo *)0x0) {
    if ((pSVar2->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSVar3 = (pSVar2->fields)._lookAndFeel;
      if (pSVar3 == (SceneGizmoLookAndFeel *)0x0) goto code_?;
    }
    else {
      pSVar3 = (pSVar2->fields)._sharedLookAndFeel;
    }
    pGVar4 = (this->fields)._._cap;
    if (pGVar4 != (GizmoCap3D *)0x0) {
      pGStack_1 = (pSVar3->fields)._midCapLookAndFeel;
      (pGVar4->fields)._sharedLookAndFeel = pGStack_1;
      ppGStack_5 = &(pGVar4->fields)._sharedLookAndFeel;
      func_?();
      return;
    }
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::SceneGizmoMidCap::SceneGizmoMidCap_Render
               (SceneGizmoMidCap *this,Camera *camera,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._._cap;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
    pIStack_1 = (pGStack_2->klass->vtable).OnVisibilityStateChanged.methodPtr;
    pCStack_3 = camera;
    (*(code *)(pGStack_2->klass->vtable).Render_1.method)();
    return;
  }
  uVar4 = func_?(&pGStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SceneGizmoMidCap(SceneGizmo) */

void Assembly-CSharp.dll::RTG::SceneGizmoMidCap::SceneGizmoMidCap__ctor
               (SceneGizmoMidCap *this,SceneGizmo *sceneGizmo,MethodInfo *method)

{
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
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._._sceneGizmo = sceneGizmo;
  func_?(&this->fields,sceneGizmo);
  if (sceneGizmo != (SceneGizmo *)0x0) {
    pGVar1 = (sceneGizmo->fields)._._gizmo;
    pGVar2 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
    GizmoCap3D::GizmoCap3D__ctor(pGVar2,pGVar1,1,(MethodInfo *)0x0);
    (this->fields)._._cap = pGVar2;
    func_?(&(this->fields)._._cap,pGVar2);
    if ((sceneGizmo->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSVar3 = (sceneGizmo->fields)._lookAndFeel;
      if (pSVar3 == (SceneGizmoLookAndFeel *)0x0) goto code_?;
    }
    else {
      pSVar3 = (sceneGizmo->fields)._sharedLookAndFeel;
    }
    pGVar2 = (this->fields)._._cap;
    if (pGVar2 != (GizmoCap3D *)0x0) {
      pGVar4 = (pSVar3->fields)._midCapLookAndFeel;
      (pGVar2->fields)._sharedLookAndFeel = pGVar4;
      func_?(&(pGVar2->fields)._sharedLookAndFeel,pGVar4);
      pGVar1 = (sceneGizmo->fields)._._gizmo;
      value = (GizmoPreHandlePickedHandler *)
              func_?(TypeInfo__RTG__GizmoPreHandlePickedHandler);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                ((EventHandler_1_Object_ *)value,(Object *)this,
                 MethodInfo__RTG__SceneGizmoMidCap__OnGizmoHandlePicked_RTG__Gizmo__int_,
                 (MethodInfo *)0x0);
      if (pGVar1 != (Gizmo *)0x0) {
        Gizmo::Gizmo_add_PreHandlePicked(pGVar1,value,(MethodInfo *)0x0);
        pGVar1 = (sceneGizmo->fields)._._gizmo;
        value_00 = (GizmoPreUpdateBeginHandler *)
                   func_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)this,
                   MethodInfo__RTG__SceneGizmoMidCap__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (pGVar1 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(pGVar1,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

