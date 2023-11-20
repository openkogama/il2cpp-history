
/* Void <ChangeRotationMode>b__28_0(IGizmoHandler, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu+<>c::GizmoMenu_c__ChangeRotationMode_b__28_0
               (GizmoMenu_c *this,IGizmoHandler *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IGizmoHandler *)&TypeInfo__IGizmoHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IGizmoHandler *)0x0) {
    pIStack_1 = handler;
    pIStack_2 = TypeInfo__IGizmoHandler;
    uStack_3 = 1;
    func_?();
    return;
  }
  pIStack_1 = (IGizmoHandler *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <CloneRoot>b__22_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu+<>c::GizmoMenu_c__CloneRoot_b__22_0
               (GizmoMenu_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x2;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Clone>b__21_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu+<>c::GizmoMenu_c__Clone_b__21_0
               (GizmoMenu_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x2;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Pop>b__18_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu+<>c::GizmoMenu_c__Pop_b__18_0
               (GizmoMenu_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x2;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GizmoMenu+<>c() */

void Assembly-CSharp.dll::GizmoMenu+<>c::GizmoMenu_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GizmoMenu____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GizmoMenu____c;
  value = (GizmoMenu_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__GizmoMenu____c->static_fields->__9 = value;
  func_?(TypeInfo__GizmoMenu____c->static_fields,value);
  return;
}

