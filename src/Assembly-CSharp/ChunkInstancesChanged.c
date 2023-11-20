
/* ChunkInstancesChanged(ChunkInstancesChanged+ChangeType, IntVector) */

void Assembly-CSharp.dll::ChunkInstancesChanged::ChunkInstancesChanged__ctor
               (ChunkInstancesChanged *this,ChunkInstancesChanged_ChangeType__Enum changeType,
               IntVector chunkPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  (this->fields).changeType = changeType;
  (this->fields).chunkPos.x = chunkPos.x;
  (this->fields).chunkPos.y = chunkPos.y;
  (this->fields).chunkPos.z = chunkPos.z;
  return;
}

