
/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::SceneGizmoCap::SceneGizmoCap_SetHoverable
               (SceneGizmoCap *this,bool isHoverable,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pGStack_2 = (this->fields)._cap;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
    if ((pGStack_2->fields)._._isHoverable != isHoverable) {
      (pGStack_2->fields)._._isHoverable = isHoverable;
      pIStack_1 = pGStack_2->klass[1]._0.image;
      (*(code *)(pGStack_2->klass->vtable).OnHoverableStateChanged.method)();
    }
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SceneGizmoCap(SceneGizmo, Int32) */

void Assembly-CSharp.dll::RTG::SceneGizmoCap::SceneGizmoCap__ctor
               (SceneGizmoCap *this,SceneGizmo *sceneGizmo,int32_t capHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap3D);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._sceneGizmo = sceneGizmo;
  func_?(&this->fields,sceneGizmo);
  if (sceneGizmo != (SceneGizmo *)0x0) {
    gizmo = (sceneGizmo->fields)._._gizmo;
    this_00 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
    GizmoCap3D::GizmoCap3D__ctor(this_00,gizmo,capHandleId,(MethodInfo *)0x0);
    (this->fields)._cap = this_00;
    func_?(&(this->fields)._cap,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_HandleId() */

int32_t Assembly-CSharp.dll::RTG::SceneGizmoCap::SceneGizmoCap_get_HandleId
                  (SceneGizmoCap *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap;
  if ((pGVar1 != (GizmoCap3D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    return (pGVar2->fields)._id;
  }
  puStack_3 = &stack0xfffffffc;
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::RTG::SceneGizmoCap::SceneGizmoCap_get_Position
                    (Vector3 *__return_storage_ptr__,SceneGizmoCap *this,MethodInfo *method)

{
  this_00 = (this->fields)._cap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pVVar1 = GizmoCap3D::GizmoCap3D_get_Position(&VStack_2,this_00,(MethodInfo *)0x0);
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

