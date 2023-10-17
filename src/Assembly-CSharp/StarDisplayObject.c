
/* Void Destroy() */

void Assembly-CSharp.dll::StarDisplayObject::StarDisplayObject_Destroy
               (StarDisplayObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).frontText;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).backText,(MethodInfo *)0x0);
  return;
}


/* Void SetAmount(Int32) */

void Assembly-CSharp.dll::StarDisplayObject::StarDisplayObject_SetAmount
               (StarDisplayObject *this,int32_t starAmount,MethodInfo *method)

{
  pTVar1 = (this->fields).frontText;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&starAmount,(MethodInfo *)0x0);
  if (pTVar1 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar1,pSVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).backText;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&starAmount,(MethodInfo *)0x0);
    if (pTVar1 != (TextMesh *)0x0) {
      method = (MethodInfo *)0x0;
      starAmount = (int32_t)pSVar2;
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

