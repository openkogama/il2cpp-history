
/* TexturePreviewer get_Instance() */

TexturePreviewer *
Assembly-CSharp.dll::Util::TexturePreviewer::TexturePreviewer_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Util__TexturePreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<Util::TexturePreviewer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__Util__TexturePreviewer);
    func_?(&StringLiteral_TexturePreviewer);
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__Util__TexturePreviewer->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this = (GameObject *)func_?();
    if (this == (GameObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pTVar1 = (TexturePreviewer *)(*pcVar3)();
      return pTVar1;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this,StringLiteral_TexturePreviewer,(MethodInfo *)0x0);
    pTVar1 = (TexturePreviewer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this,
                        Util__TexturePreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<Util::TexturePreviewer>__
                       );
    TypeInfo__Util__TexturePreviewer->static_fields->_instance = pTVar1;
    func_?();
  }
  return TypeInfo__Util__TexturePreviewer->static_fields->_instance;
}

