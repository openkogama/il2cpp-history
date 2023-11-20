
/* OnTransferOwnershipResponseEventArgs(Int32, Int32, Boolean) */

void Assembly-CSharp.dll::OnTransferOwnershipResponseEventArgs::
     OnTransferOwnershipResponseEventArgs__ctor
               (OnTransferOwnershipResponseEventArgs *this,int32_t worldObjectID,
               int32_t ownerActorNr,bool success,MethodInfo *method)

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
  (this->fields).worldObjectID = worldObjectID;
  (this->fields).ownerActorNr = ownerActorNr;
  (this->fields).success = success;
  return;
}

