
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RoundedRectangle+<GetMaterialFromPrefabPool>d__2::
     RoundedRectangle_GetMaterialFromPrefabPool_d_2_MoveNext
               (RoundedRectangle_GetMaterialFromPrefabPool_d_2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pRVar2 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (this->fields).__1__state = -1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current,0);
      (this->fields).__1__state = 1;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar3 == (PrefabPool *)0x0) || (pRVar2 == (RoundedRectangle *)0x0)) {
      func_?();
      pcVar5 = (code *)swi(3);
      bVar4 = (*pcVar5)();
      return bVar4;
    }
    (*(code *)(pRVar2->klass->vtable).set_material.method)
              (pRVar2,(pPVar3->fields).roundedRectangleMaterial,
               (pRVar2->klass->vtable).get_materialForRendering.methodPtr);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RoundedRectangle+<GetMaterialFromPrefabPool>d__2::
     RoundedRectangle_GetMaterialFromPrefabPool_d_2_System_Collections_IEnumerator_Reset
               (RoundedRectangle_GetMaterialFromPrefabPool_d_2 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RoundedRectangle___GetMaterialFromPrefabPool_d__2__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

