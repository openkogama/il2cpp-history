
/* GizmoLineSlider2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor
               (GizmoLineSlider2DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._color.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields)._color.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._color.a = (float)uVar5;
  (this->fields)._length = 50.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (this->fields)._hoveredColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._hoveredColor.a = (float)uVar5;
  (this->fields)._scale = 1.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (this->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (this->fields)._borderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._borderColor.a = (float)uVar5;
  (this->fields)._boxThickness = 3.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar4 = _UNK_?;
  (this->fields)._hoveredBorderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (this->fields)._hoveredBorderColor.a = (float)uVar5;
  (this->fields)._isRotationArcVisible = 1;
  pGVar7 = (GizmoRotationArc2DLookAndFeel *)
           FUN_?(TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  bVar8 = iRam_? != 0;
  (pGVar7->fields)._useShortestRotation = 1;
  (pGVar7->fields)._fillFlags = 3;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar4 = _UNK_?;
  (pGVar7->fields)._color.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar4 = _UNK_?;
  (pGVar7->fields)._color.a = (float)uVar5;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar4 = _UNK_?;
  (pGVar7->fields)._borderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (pGVar7->fields)._borderColor.a = (float)uVar5;
  (this->fields)._rotationArcLookAndFeel = pGVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields)._rotationArcLookAndFeel >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pGVar13 = (GizmoCap2DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  bVar8 = iRam_? != 0;
  (pGVar13->fields)._fillMode = 2;
  (pGVar13->fields)._scale = 1.0;
  (pGVar13->fields)._circleRadius = 12.0;
  (pGVar13->fields)._quadWidth = 25.0;
  (pGVar13->fields)._quadHeight = 25.0;
  (pGVar13->fields)._arrowBaseRadius = 5.0;
  (pGVar13->fields)._arrowHeight = 20.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar13->fields)._color.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar13->fields)._color.a = (float)uVar5;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar13->fields)._hoveredColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar13->fields)._hoveredColor.a = (float)uVar5;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar13->fields)._borderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar13->fields)._borderColor.a = (float)uVar5;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._hoveredBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar4 = _UNK_?;
  (pGVar13->fields)._hoveredBorderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (pGVar13->fields)._hoveredBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (pGVar13->fields)._hoveredBorderColor.a = (float)uVar5;
  (this->fields)._capLookAndFeel = pGVar13;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields)._capLookAndFeel >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}

