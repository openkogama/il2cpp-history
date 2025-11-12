
/* IAsyncResult BeginInvoke(Gizmo, Vector3, Int32, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
GizmoOffsetDragAxisModifyHandler_BeginInvoke
          (GizmoOffsetDragAxisModifyHandler *this,Gizmo *gizmo,Vector3 *relativeDragAxis,
          int32_t handleId,AsyncCallback *callback,Object *object,MethodInfo *method)

{
  aiStackX_20[0] = handleId;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pGStack_2 = gizmo;
  uStack_3 = FUN_?(TypeInfo__UnityEngine__Vector3,relativeDragAxis);
  uStack_4 = FUN_?(uRam_?,aiStackX_20);
  pIVar5 = (IAsyncResult *)FUN_?(this,&pGStack_2,callback,object);
  return pIVar5;
}


/* Vector3 EndInvoke(IAsyncResult) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
          GizmoOffsetDragAxisModifyHandler_EndInvoke
                    (Vector3 *__return_storage_ptr__,GizmoOffsetDragAxisModifyHandler *this,
                    IAsyncResult *result,MethodInfo *method)

{
  lVar1 = FUN_?(result,auStack_2,apIStackX_8);
  if (apIStackX_8[0] != (Il2CppChar *)0x0) {
    il2cpp_set_config_utf16(apIStackX_8[0]);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    fVar6 = *(float *)(lVar1 + 0x18);
    __return_storage_ptr__->x = (float)(int)uVar5;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar3)();
  return pVVar4;
}


/* Vector3 Invoke(Gizmo, Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
          GizmoOffsetDragAxisModifyHandler_Invoke
                    (Vector3 *__return_storage_ptr__,GizmoOffsetDragAxisModifyHandler *this,
                    Gizmo *gizmo,Vector3 *relativeDragAxis,int32_t handleId,MethodInfo *method)

{
  fStack_1 = relativeDragAxis->z;
  uStack_2._0_4_ = relativeDragAxis->x;
  uStack_2._4_4_ = relativeDragAxis->y;
  puVar3 = (undefined8 *)
           (*(this->fields)._._.invoke_impl)
                     (auStack_4,(this->fields)._._.method_code,gizmo,&uStack_2,handleId,
                      (this->fields)._._.method);
  uVar5 = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  __return_storage_ptr__->x = (float)(int)uVar5;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* GizmoOffsetDragAxisModifyHandler(Object, IntPtr) */

void Assembly-CSharp.dll::RTG::GizmoOffsetDragAxisModifyHandler::
     GizmoOffsetDragAxisModifyHandler__ctor
               (GizmoOffsetDragAxisModifyHandler *this,Object *object,void *method_1,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._._.method_ptr = *(void **)((longlong)method_1 + 8);
  (this->fields)._._.method = method_1;
  (this->fields)._._.m_target = object;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.m_target >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  cVar6 = *(char *)((longlong)method_1 + 0x52);
  (this->fields)._._.method_code = this;
  if ((*(byte *)((longlong)method_1 + 0x4c) & 0x10) == 0) {
    if (cVar6 == '\x02') {
      if ((this->fields)._._.method_is_virtual == 0) {
        pcVar7 = FUN_?;
      }
      else if (((*(byte *)((longlong)method_1 + 0x53) & 3) == 2) &&
              (*(longlong *)(*(longlong *)((longlong)method_1 + 0x40) + 0x10) != 0)) {
        lVar8 = *(longlong *)((longlong)method_1 + 0x20);
        if ((((*(byte *)(lVar8 + 0x118) & 0x20) == 0) && (*(char *)(lVar8 + 0x2a) != '\x13')) &&
           (*(char *)(lVar8 + 0x2a) != '\x1e')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        pcVar7 = FUN_?;
        if (!bVar1) {
          pcVar7 = FUN_?;
        }
      }
      else {
        lVar8 = *(longlong *)((longlong)method_1 + 0x20);
        if (((*(byte *)(lVar8 + 0x118) & 0x20) != 0) ||
           ((*(char *)(lVar8 + 0x2a) == '\x13' ||
            (pcVar7 = FUN_?, *(char *)(lVar8 + 0x2a) == '\x1e')))) {
          pcVar7 = FUN_?;
        }
      }
      (this->fields)._._.invoke_impl = pcVar7;
      (this->fields)._._.extra_arg = FUN_?;
      return;
    }
    if (object == (Object *)0x0) {
      uVar9 = func_?();
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (cVar6 == '\x03') {
    pcVar7 = FUN_?;
    goto code_?;
  }
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  pcVar7 = (this->fields)._._.method_ptr;
code_?:
  (this->fields)._._.invoke_impl = pcVar7;
  (this->fields)._._.extra_arg = FUN_?;
  return;
}

