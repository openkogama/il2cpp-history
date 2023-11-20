
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedAssetToCallback`2[System::Object,System::Object]::
     StreamedAssetToCallback_2_System_Object_System_Object__OnAssetSet
               (StreamedAssetToCallback_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this != (StreamedAssetToCallback_2_System_Object_System_Object_ *)0x0) &&
     (pAVar2 = (this->fields).onAssetSet, pAVar2 != (Action_1_Object_ *)0x0)) {
    puStack_1 = (pAVar2->fields)._._.method;
    pOStack_3 = (this->fields)._.asset;
    pvStack_4 = (pAVar2->fields)._._.method_code;
    (*(pAVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

