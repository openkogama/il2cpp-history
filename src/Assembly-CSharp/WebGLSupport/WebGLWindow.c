
/* Void Init() */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_Init(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&MethodInfo__WebGLSupport__WebGLWindow__OnWindowResize__);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__WebGLSupport__WebGLWindow->static_fields->_Focus_k__BackingField = 1;
  pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar1,(Object *)0x0,MethodInfo__WebGLSupport__WebGLWindow__OnWindowFocus__,
               (MethodInfo *)0x0);
    pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar1,(Object *)0x0,MethodInfo__WebGLSupport__WebGLWindow__OnWindowBlur__,
                 (MethodInfo *)0x0);
      pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar1,(Object *)0x0,MethodInfo__WebGLSupport__WebGLWindow__OnWindowResize__,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnWindowBlur() */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_OnWindowBlur(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__WebGLSupport__WebGLWindow->static_fields->_Focus_k__BackingField = 0;
  pAVar1 = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent;
  if (pAVar1 != (Action *)0x0) {
    puStack_2 = (pAVar1->fields)._._.method_code;
    (*(pAVar1->fields)._._.invoke_impl)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnWindowFocus() */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_OnWindowFocus(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__WebGLSupport__WebGLWindow->static_fields->_Focus_k__BackingField = 1;
  pAVar1 = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnFocusEvent;
  if (pAVar1 != (Action *)0x0) {
    puStack_2 = (pAVar1->fields)._._.method_code;
    (*(pAVar1->fields)._._.invoke_impl)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnWindowResize() */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_OnWindowResize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar1 = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnResizeEvent;
  if (pAVar1 != (Action *)0x0) {
    puStack_2 = (pAVar1->fields)._._.method_code;
    (*(pAVar1->fields)._._.invoke_impl)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RuntimeInitializeOnLoadMethod() */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_RuntimeInitializeOnLoadMethod
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&MethodInfo__WebGLSupport__WebGLWindow__OnWindowResize__);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__WebGLSupport__WebGLWindow->static_fields->_Focus_k__BackingField = 1;
  pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar1,(Object *)0x0,MethodInfo__WebGLSupport__WebGLWindow__OnWindowFocus__,
               (MethodInfo *)0x0);
    pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar1,(Object *)0x0,MethodInfo__WebGLSupport__WebGLWindow__OnWindowBlur__,
                 (MethodInfo *)0x0);
      pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar1,(Object *)0x0,MethodInfo__WebGLSupport__WebGLWindow__OnWindowResize__,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* WebGLWindow() */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__WebGLSupport__WebGLWindow____c____cctor_b__0_0__);
    func_?(&MethodInfo__WebGLSupport__WebGLWindow____c____cctor_b__0_1__);
    func_?(&MethodInfo__WebGLSupport__WebGLWindow____c____cctor_b__0_2__);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow____c);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow____c);
  }
  pOVar1 = (Object *)TypeInfo__WebGLSupport__WebGLWindow____c->static_fields->__9;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  if (pNVar2 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,pOVar1,MethodInfo__WebGLSupport__WebGLWindow____c____cctor_b__0_0__,
               (MethodInfo *)0x0);
    TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnFocusEvent = (Action *)pNVar2;
    func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnFocusEvent,pNVar2);
    pOVar1 = (Object *)TypeInfo__WebGLSupport__WebGLWindow____c->static_fields->__9;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar2 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,pOVar1,MethodInfo__WebGLSupport__WebGLWindow____c____cctor_b__0_1__,
                 (MethodInfo *)0x0);
      TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent = (Action *)pNVar2;
      func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent,pNVar2);
      pOVar1 = (Object *)TypeInfo__WebGLSupport__WebGLWindow____c->static_fields->__9;
      pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (pNVar2 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar2,pOVar1,MethodInfo__WebGLSupport__WebGLWindow____c____cctor_b__0_2__,
                   (MethodInfo *)0x0);
        TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnResizeEvent = (Action *)pNVar2;
        func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnResizeEvent,pNVar2);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void add_OnBlurEvent(Action) */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_add_OnBlurEvent
               (Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
  }
  a = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLWindow);
    }
    pAVar4 = (Action *)
             func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent,pDVar2
                             ,a);
    bVar5 = pAVar4 != a;
    a = pAVar4;
  } while (bVar5);
  return;
}


/* Void add_OnFocusEvent(Action) */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_add_OnFocusEvent
               (Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
  }
  a = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnFocusEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLWindow);
    }
    pAVar4 = (Action *)
             func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnFocusEvent,
                             pDVar2,a);
    bVar5 = pAVar4 != a;
    a = pAVar4;
  } while (bVar5);
  return;
}


/* Void add_OnResizeEvent(Action) */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_add_OnResizeEvent
               (Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
  }
  a = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnResizeEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLWindow);
    }
    pAVar4 = (Action *)
             func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnResizeEvent,
                             pDVar2,a);
    bVar5 = pAVar4 != a;
    a = pAVar4;
  } while (bVar5);
  return;
}


/* Boolean get_Focus() */

bool Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_get_Focus(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
  }
  return TypeInfo__WebGLSupport__WebGLWindow->static_fields->_Focus_k__BackingField;
}


/* Void remove_OnBlurEvent(Action) */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_remove_OnBlurEvent
               (Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
  }
  source = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLWindow);
    }
    pAVar4 = (Action *)
             func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent,pDVar2
                             ,source);
    bVar5 = pAVar4 != source;
    source = pAVar4;
  } while (bVar5);
  return;
}


/* Void remove_OnFocusEvent(Action) */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_remove_OnFocusEvent
               (Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
  }
  source = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnFocusEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLWindow);
    }
    pAVar4 = (Action *)
             func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnFocusEvent,
                             pDVar2,source);
    bVar5 = pAVar4 != source;
    source = pAVar4;
  } while (bVar5);
  return;
}


/* Void remove_OnResizeEvent(Action) */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_remove_OnResizeEvent
               (Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
  }
  source = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnResizeEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLWindow);
    }
    pAVar4 = (Action *)
             func_?(&TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnResizeEvent,
                             pDVar2,source);
    bVar5 = pAVar4 != source;
    source = pAVar4;
  } while (bVar5);
  return;
}


/* Void set_Focus(Boolean) */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow::WebGLWindow_set_Focus
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLWindow);
    TypeInfo__WebGLSupport__WebGLWindow->static_fields->_Focus_k__BackingField = value;
    return;
  }
  TypeInfo__WebGLSupport__WebGLWindow->static_fields->_Focus_k__BackingField = value;
  return;
}

