
/* Void Destroy() */

void Assembly-CSharp.dll::GameRankDisplayObject::GameRankDisplayObject_Destroy
               (GameRankDisplayObject *this,MethodInfo *method)

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


/* Void SetAmount(GamePassTier) */

void Assembly-CSharp.dll::GameRankDisplayObject::GameRankDisplayObject_SetAmount
               (GameRankDisplayObject *this,GamePassTier__Enum requiredRank,MethodInfo *method)

{
  GVar1 = requiredRank;
  requiredRank = requiredRank & 0xff;
  pTVar2 = (this->fields).frontText;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&requiredRank,(MethodInfo *)0x0);
  if (pTVar2 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar2,pSVar3,(MethodInfo *)0x0);
    pTVar2 = (this->fields).backText;
    requiredRank = GVar1 & 0xff;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&requiredRank,(MethodInfo *)0x0);
    if (pTVar2 != (TextMesh *)0x0) {
      requiredRank = GamePassTier__Enum_Tier0;
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar2,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  requiredRank = (GamePassTier__Enum)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

