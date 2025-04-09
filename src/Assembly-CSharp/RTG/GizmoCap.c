
/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap_SetHoverable
               (GizmoCap *this,bool isHoverable,MethodInfo *method)

{
  if ((this->fields)._isHoverable != isHoverable) {
    (this->fields)._isHoverable = isHoverable;
    (*(code *)(this->klass->vtable).__unknown_2.method)(this,this->klass[1]._0.image);
  }
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap_SetVisible
               (GizmoCap *this,bool isVisible,MethodInfo *method)

{
  if ((this->fields)._isVisible != isVisible) {
    (this->fields)._isVisible = isVisible;
    (*(code *)(this->klass->vtable).__unknown_1.method)
              (this,(this->klass->vtable).__unknown_2.methodPtr);
  }
  return;
}


/* GizmoCap(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap__ctor
               (GizmoCap *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pGVar1 = &this->fields;
  pGVar1->_gizmo = gizmo;
  func_?(pGVar1,gizmo);
  if (pGVar1->_gizmo != (Gizmo *)0x0) {
    pGVar2 = Gizmo::Gizmo_CreateHandle(pGVar1->_gizmo,handleId,(MethodInfo *)0x0);
    ppGVar3 = &(this->fields)._handle;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean get_IsHovered() */

bool Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap_get_IsHovered(GizmoCap *this,MethodInfo *method)

{
  this_00 = (this->fields)._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    iVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            PointerCaptureEventBase`1[System::Object]::
            PointerCaptureEventBase_1_System_Object__get_pointerId
                      ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._handle;
    if (pGVar2 != (GizmoHandle *)0x0) {
      return iVar1 == (pGVar2->fields)._id;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

