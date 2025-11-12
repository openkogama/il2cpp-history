
/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap_SetHoverable
               (GizmoCap *this,bool isHoverable,MethodInfo *method)

{
  if ((this->fields)._isHoverable != isHoverable) {
    (this->fields)._isHoverable = isHoverable;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).__unknown_2.methodPtr)(this,(this->klass->vtable).__unknown_2.method);
    return;
  }
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap_SetVisible
               (GizmoCap *this,bool isVisible,MethodInfo *method)

{
  if ((this->fields)._isVisible != isVisible) {
    (this->fields)._isVisible = isVisible;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).__unknown_1.methodPtr)(this,(this->klass->vtable).__unknown_1.method);
    return;
  }
  return;
}


/* GizmoCap(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap__ctor
               (GizmoCap *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  (this->fields)._gizmo = gizmo;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (this->fields)._gizmo;
  if (this_00 == (Gizmo *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pGVar7 = Gizmo::Gizmo_CreateHandle(this_00,handleId,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._handle = pGVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._handle >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Boolean get_IsHovered() */

bool Assembly-CSharp.dll::RTG::GizmoCap::GizmoCap_get_IsHovered(GizmoCap *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._gizmo;
  if ((pGVar1 != (Gizmo *)0x0) && (pGVar2 = (this->fields)._handle, pGVar2 != (GizmoHandle *)0x0)) {
    return (pGVar1->fields)._hoverInfo._handleId == (pGVar2->fields)._id;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

