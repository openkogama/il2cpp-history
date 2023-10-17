
/* Void Destroy() */

void Assembly-CSharp.dll::GameCoinDisplayObject::GameCoinDisplayObject_Destroy
               (GameCoinDisplayObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).textMesh1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).textMesh2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).coinMesh,(MethodInfo *)0x0);
  return;
}


/* Void SetAmount(Int32) */

void Assembly-CSharp.dll::GameCoinDisplayObject::GameCoinDisplayObject_SetAmount
               (GameCoinDisplayObject *this,int32_t amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  value = ::StringLiteral__;
  if (0 < amount) {
    value = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&amount,(MethodInfo *)0x0);
  }
  pTVar1 = (this->fields).textMesh1;
  if (pTVar1 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (this->fields).textMesh2;
    if (pTVar1 != (TextMesh *)0x0) {
      amount = 0;
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  amount = (int32_t)&UNK_?;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

