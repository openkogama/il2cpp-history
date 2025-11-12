
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinQuad2DBorderController::
     GizmoThinQuad2DBorderController_UpdateEpsilons
               (GizmoThinQuad2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoQuad2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) {
    lVar3 = 0x100;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
      lVar3 = 0xf8;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pQVar4 = (pGVar1->fields).BorderQuad, pQVar4 != (QuadShape2D *)0x0)) {
      (pQVar4->fields)._epsilon._wireEps = (float)(*(uint *)(lVar3 + 0x14) & _UNK_?);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinQuad2DBorderController::
     GizmoThinQuad2DBorderController_UpdateHandles
               (GizmoThinQuad2DBorderController *this,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)(this->fields)._._data;
  if (((pMVar1 == (MethodInfo *)0x0) || (method = pMVar1, pMVar1->klass == (Il2CppClass *)0x0)) ||
     (pGVar2 = (GizmoHandle *)pMVar1->return_type, this = (GizmoThinQuad2DBorderController *)0x0,
     pGVar2 == (GizmoHandle *)0x0)) {
    FUN_?(this,method);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = (pMVar1->klass->byval_arg).attrs;
  uVar5 = *(uint *)&pMVar1->field8_0x40;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar6 = (pGVar2->fields)._2DShapes;
  if (pLVar6 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    if ((uint)(pLVar6->fields)._size <= uVar5) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pGVar7 = (pLVar6->fields)._items;
    if (pGVar7 != (GizmoHandleShape2D__Array *)0x0) {
      if ((uint)pGVar7->max_length <= uVar5) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pGVar7->vector[(int)uVar5] != (GizmoHandleShape2D *)0x0) {
        (pGVar7->vector[(int)uVar5]->fields)._isVisible = (bool)uVar4;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoThinQuad2DBorderController::
     GizmoThinQuad2DBorderController_UpdateTransforms
               (GizmoThinQuad2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoQuad2DBorderControllerData *)0x0) &&
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 != (QuadShape2D *)0x0)) {
    pQVar3 = (pGVar1->fields).BorderQuad;
    fVar4 = (pQVar2->fields)._center.x;
    if (pQVar3 != (QuadShape2D *)0x0) {
      (pQVar3->fields)._center.y = (pQVar2->fields)._center.y;
      uVar5 = _UNK_?;
      (pQVar3->fields)._center.x = fVar4;
      fVar4 = (float)FUN_?((pQVar2->fields)._rotationDegrees,uVar5);
      (pQVar3->fields)._rotationDegrees = fVar4;
      fVar4 = (float)((uint)(pQVar2->fields)._size.y & _UNK_?);
      (pQVar3->fields)._size.x = (float)((uint)(pQVar2->fields)._size.x & _UNK_?);
      (pQVar3->fields)._size.y = fVar4;
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

