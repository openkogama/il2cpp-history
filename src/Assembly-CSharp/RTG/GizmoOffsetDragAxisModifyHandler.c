
/* IAsyncResult BeginInvoke(Gizmo, Vector3, Int32, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
GizmoOffsetDragAxisModifyHandler_BeginInvoke
          (GizmoOffsetDragAxisModifyHandler *this,Gizmo *gizmo,Vector3 relativeDragAxis,
          int32_t handleId,AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pGStack_1 = gizmo;
  uStack_2 = 0;
  uStack_3 = func_?(TypeInfo__UnityEngine__Vector3,&relativeDragAxis);
  uStack_4 = func_?(TypeInfo__System__Int32,&handleId);
  pIVar5 = (IAsyncResult *)func_?(this,&pGStack_1,callback,object);
  return pIVar5;
}


/* Vector3 EndInvoke(IAsyncResult) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
          GizmoOffsetDragAxisModifyHandler_EndInvoke
                    (Vector3 *__return_storage_ptr__,GizmoOffsetDragAxisModifyHandler *this,
                    IAsyncResult *result,MethodInfo *method)

{
  puStack_1 = (undefined1 *)0x0;
  pIStack_2 = result;
  puStack_1 = (undefined1 *)func_?();
  if (puStack_1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)func_?();
    uVar4 = *puVar3;
    fVar5 = *(float *)(puVar3 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  puStack_1 = &stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Vector3 Invoke(Gizmo, Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
          GizmoOffsetDragAxisModifyHandler_Invoke
                    (Vector3 *__return_storage_ptr__,GizmoOffsetDragAxisModifyHandler *this,
                    Gizmo *gizmo,Vector3 relativeDragAxis,int32_t handleId,MethodInfo *method)

{
  puVar1 = (undefined8 *)
           (*(this->fields)._._.invoke_impl)
                     (auStack_2,(this->fields)._._.method_code,gizmo,relativeDragAxis._0_8_,
                      relativeDragAxis.z,handleId,(this->fields)._._.method);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* GizmoOffsetDragAxisModifyHandler(Object, IntPtr) */

void Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
     GizmoOffsetDragAxisModifyHandler__ctor
               (GizmoOffsetDragAxisModifyHandler *this,Object *object,void *method_1,
               MethodInfo *method)

{
  ppOVar1 = &(this->fields)._._.m_target;
  (this->fields)._._.method_ptr = *(void **)((int)method_1 + 4);
  (this->fields)._._.method = method_1;
  *ppOVar1 = object;
  func_?(ppOVar1,object);
  cVar2 = *(char *)((int)method_1 + 0x2e);
  (this->fields)._._.method_code = this;
  cVar3 = func_?(method_1);
  if (cVar3 != '\0') {
    ppvVar4 = &(this->fields)._._.invoke_impl;
    if (cVar2 == '\x03') {
      *ppvVar4 = &UNK_?;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    pvVar5 = (this->fields)._._.method_ptr;
    (this->fields)._._.method_code = (this->fields)._._.m_target;
    *ppvVar4 = pvVar5;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  if (cVar2 != '\x02') {
    if (object != (Object *)0x0) {
      pvVar5 = (this->fields)._._.method_ptr;
      (this->fields)._._.method_code = *ppOVar1;
      (this->fields)._._.invoke_impl = pvVar5;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    uVar6 = func_?(0,&UNK_?,0);
    func_?(uVar6);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppvVar4 = &(this->fields)._._.invoke_impl;
  if ((this->fields)._._.method_is_virtual != 0) {
    cVar2 = func_?(method_1);
    if (cVar2 != '\0') {
      cVar2 = func_?(method_1);
      puVar8 = &UNK_?;
      if (cVar2 != '\0') {
        puVar8 = &UNK_?;
      }
      *ppvVar4 = puVar8;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    cVar2 = func_?(method_1);
    puVar8 = &UNK_?;
    if (cVar2 != '\0') {
      puVar8 = &UNK_?;
    }
    *ppvVar4 = puVar8;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  *ppvVar4 = &UNK_?;
  (this->fields)._._.extra_arg = &UNK_?;
  return;
}

