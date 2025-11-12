
/* Void Transfer(GizmoObjectVertexSnapSettings) */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapSettings::GizmoObjectVertexSnapSettings_Transfer
               (GizmoObjectVertexSnapSettings *this,GizmoObjectVertexSnapSettings *destination,
               MethodInfo *method)

{
  if (destination != (GizmoObjectVertexSnapSettings *)0x0) {
    (destination->fields)._snapDestinationLayers = (this->fields)._snapDestinationLayers;
    (destination->fields)._canSnapToGrid = (this->fields)._canSnapToGrid;
    (destination->fields)._canSnapToObjectVerts = (this->fields)._canSnapToObjectVerts;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GizmoObjectVertexSnapSettings() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapSettings::GizmoObjectVertexSnapSettings__ctor
               (GizmoObjectVertexSnapSettings *this,MethodInfo *method)

{
  (this->fields)._snapDestinationLayers = -1;
  (this->fields)._canSnapToGrid = 1;
  (this->fields)._canSnapToObjectVerts = 1;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
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
  return;
}

