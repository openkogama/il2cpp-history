
/* IAsyncResult BeginInvoke(Int32, Gizmo, GizmoHandleHoverData, YesNoAnswer, AsyncCallback, Object)
    */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoHandleCanHoverHandler::GizmoHandleCanHoverHandler_BeginInvoke
          (GizmoHandleCanHoverHandler *this,int32_t handleId,Gizmo *ownerGizmo,
          GizmoHandleHoverData *handleHoverData,YesNoAnswer *answer,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  uStack_1 = 0;
  aiStackX_10[0] = handleId;
  uStack_2 = FUN_?(uRam_?,aiStackX_10);
  pYStack_3 = answer;
  pGStack_4 = ownerGizmo;
  pGStack_5 = handleHoverData;
  pIVar6 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar6;
}


/* GizmoHandleCanHoverHandler(Object, IntPtr) */

void Assembly-CSharp.dll::RTG::GizmoHandleCanHoverHandler::GizmoHandleCanHoverHandler__ctor
               (GizmoHandleCanHoverHandler *this,Object *object,void *method_1,MethodInfo *method)

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
    if (object == (Object *)0x0) {
      uVar7 = func_?();
      FUN_?(uVar7,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (cVar6 == '\x04') {
    (this->fields)._._.invoke_impl = FUN_?;
    (this->fields)._._.extra_arg = FUN_?;
    return;
  }
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
  (this->fields)._._.extra_arg = FUN_?;
  return;
}

