
/* Vector3 GetClosestPoint() */

Vector3 * Assembly-CSharp.dll::ClosestPointPoint::ClosestPointPoint_GetClosestPoint_1
                    (Vector3 *__return_storage_ptr__,ClosestPointPoint *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ClosestPointPoint::ClosestPointPoint_OnValidate
               (ClosestPointPoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Transform>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  ppTVar2 = &(this->fields).transform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar1 = (Transform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Transform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Transform>__
                       );
    *ppTVar2 = pTVar1;
    func_?(ppTVar2,pTVar1);
  }
  return;
}

