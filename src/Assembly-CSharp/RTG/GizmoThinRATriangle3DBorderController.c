
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinRATriangle3DBorderController::GizmoThinRATriangle3DBorderController_UpdateEpsilons(GizmoThinRATriangle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoRATriangle3DBorderControllerData *)0x0) && (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider3D *)0x0)) {
    lVar3 = 200;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
      lVar3 = 0xc0;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pRVar4 = (pGVar1->fields).BorderTriangle, pRVar4 != (RightAngTriangle3D *)0x0)) {
      (pRVar4->fields)._epsilon._wireEps = ABS(zoomFactor * *(float *)(lVar3 + 0x18));
      if ((pGVar1 != (GizmoRATriangle3DBorderControllerData *)0x0) && (pRVar4 != (RightAngTriangle3D *)0x0)) {
        (pRVar4->fields)._epsilon._extrudeEps = ABS((pRVar4->fields)._epsilon._wireEps);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinRATriangle3DBorderController::GizmoThinRATriangle3DBorderController_UpdateHandles(GizmoThinRATriangle3DBorderController *this,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)(this->fields)._._data;
  if (((pMVar1 == (MethodInfo *)0x0) || (method = pMVar1, pMVar1->klass == (Il2CppClass *)0x0)) || (pGVar2 = (GizmoHandle *)pMVar1->return_type, this = (GizmoThinRATriangle3DBorderController *)0x0, pGVar2 == (GizmoHandle *)0x0)) {
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
  pLVar6 = (pGVar2->fields)._3DShapes;
  if (pLVar6 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar6->fields)._size <= uVar5) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pGVar7 = (pLVar6->fields)._items;
    if (pGVar7 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar7->max_length <= uVar5) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pGVar7->vector[(int)uVar5] != (GizmoHandleShape3D *)0x0) {
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


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinRATriangle3DBorderController::GizmoThinRATriangle3DBorderController_UpdateTransforms(GizmoThinRATriangle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoRATriangle3DBorderControllerData *)0x0) && (pRVar2 = (pGVar1->fields).TargetTriangle, pRVar2 != (RightAngTriangle3D *)0x0)) && (pRVar3 = (pGVar1->fields).BorderTriangle, pRVar3 != (RightAngTriangle3D *)0x0)) {
    fVar4 = (pRVar2->fields)._rotation.y;
    fVar5 = (pRVar2->fields)._rotation.z;
    fVar6 = (pRVar2->fields)._rotation.w;
    (pRVar3->fields)._rotation.x = (pRVar2->fields)._rotation.x;
    (pRVar3->fields)._rotation.y = fVar4;
    (pRVar3->fields)._rotation.z = fVar5;
    (pRVar3->fields)._rotation.w = fVar6;
    fVar4 = (pRVar2->fields)._rightAngleCorner.z;
    fVar5 = (pRVar2->fields)._rightAngleCorner.y;
    (pRVar3->fields)._rightAngleCorner.x = (pRVar2->fields)._rightAngleCorner.x;
    (pRVar3->fields)._rightAngleCorner.y = fVar5;
    (pRVar3->fields)._rightAngleCorner.z = fVar4;
    (pRVar3->fields)._XLength = ABS((pRVar2->fields)._XLength);
    (pRVar3->fields)._XLengthSign = (pRVar2->fields)._XLengthSign;
    (pRVar3->fields)._YLength = ABS((pRVar2->fields)._YLength);
    (pRVar3->fields)._YLengthSign = (pRVar2->fields)._YLengthSign;
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

