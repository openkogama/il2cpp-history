
/* Void Destroy() */

void Assembly-CSharp.dll::GameCoinDisplayObject::GameCoinDisplayObject_Destroy
               (GameCoinDisplayObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).textMesh1;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  value = TypeInfo__System__String->static_fields->Empty;
  if (0 < amount) {
    value = (String *)func_?(&amount,0);
  }
  pTVar1 = (this->fields).textMesh1;
  if (pTVar1 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (this->fields).textMesh2;
    if (pTVar1 != (TextMesh *)0x0) {
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::GameCoinDisplayObject::GameCoinDisplayObject_SetScale
               (GameCoinDisplayObject *this,Vector3 size,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,size,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

