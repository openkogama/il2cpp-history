
/* Void Destroy() */

void Assembly-CSharp.dll::GameRankDisplayObject::GameRankDisplayObject_Destroy
               (GameRankDisplayObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).frontText;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  GVar1 = requiredRank & 0xff;
  pTVar2 = (this->fields).frontText;
  GStack_3 = GamePassTier__Enum_Tier0;
  requiredRank = GVar1;
  pSVar4 = (String *)func_?(&requiredRank,0);
  if (pTVar2 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar2,pSVar4,(MethodInfo *)0x0);
    pTVar2 = (this->fields).backText;
    GStack_3 = GVar1;
    pSVar4 = (String *)func_?(&GStack_3,0);
    if (pTVar2 != (TextMesh *)0x0) {
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar2,pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

