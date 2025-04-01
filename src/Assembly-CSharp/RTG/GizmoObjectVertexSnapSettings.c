
/* Void Transfer(GizmoObjectVertexSnapSettings) */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapSettings::GizmoObjectVertexSnapSettings_Transfer
               (GizmoObjectVertexSnapSettings *this,GizmoObjectVertexSnapSettings *destination,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (destination != (GizmoObjectVertexSnapSettings *)0x0) {
    (destination->fields)._snapDestinationLayers = (this->fields)._snapDestinationLayers;
    (destination->fields)._canSnapToGrid = (this->fields)._canSnapToGrid;
    (destination->fields)._canSnapToObjectVerts = (this->fields)._canSnapToObjectVerts;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(&StringLiteral_Settings);
    cRam_? = '\x01';
  }
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
  func_?(method_00,StringLiteral_Settings);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

