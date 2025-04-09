
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVMaterialRepository+<GenerateMaterialButtonTextureRoutine>d__26::
     MVMaterialRepository_GenerateMaterialButtonTextureRoutine_d_26_MoveNext
               (MVMaterialRepository_GenerateMaterialButtonTextureRoutine_d_26 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    func_?(&
                    MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pMVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    ppOVar3 = &(this->fields).__2__current;
    (this->fields).__1__state = -1;
    *ppOVar3 = (Object *)0x0;
    func_?(ppOVar3,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar4 == (PrefabPool *)0x0) goto code_?;
    pMVar5 = (pPVar4->fields).materialButtonTextureGenerator;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar5 = (MaterialButtonTextureGenerator *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar5,
                         MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                        );
    ppMVar6 = &(this->fields)._materialButtonTextureGenerator_5__2;
    *ppMVar6 = pMVar5;
    func_?(ppMVar6,pMVar5);
    (this->fields)._i_5__3 = 0;
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    piVar7 = &(this->fields)._i_5__3;
    *piVar7 = *piVar7 + 1;
    (this->fields).__1__state = -1;
  }
  if ((pMVar2 != (MVMaterialRepository *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pMVar2->fields).materials,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    iVar1 = (this->fields)._i_5__3;
    if (iVar1 < (this_00->fields)._size) {
      RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,iVar1,
                          MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_)
      ;
      if ((RVar8 != (RegexCharClass_SingleRange)0x0) &&
         (pMVar5 = (this->fields)._materialButtonTextureGenerator_5__2,
         pMVar5 != (MaterialButtonTextureGenerator *)0x0)) {
        pTVar9 = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                            (pMVar5,*(Mesh **)((int)RVar8 + 0x10),(MethodInfo *)0x0);
        *(undefined4 *)((int)RVar8 + 0x34) = pTVar9;
        func_?((undefined4 *)((int)RVar8 + 0x34),pTVar9);
        ppOVar3 = &(this->fields).__2__current;
        *ppOVar3 = (Object *)0x0;
        func_?(ppOVar3,0);
        (this->fields).__1__state = 2;
        return 1;
      }
    }
    else {
      pMVar5 = (this->fields)._materialButtonTextureGenerator_5__2;
      if (pMVar5 != (MaterialButtonTextureGenerator *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pMVar5,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        ppIVar10 = &(pMVar2->fields).generateTexturesRoutine;
        (pMVar2->fields)._IsButtonTexturesInitialized_k__BackingField = 1;
        *ppIVar10 = (IEnumerator *)0x0;
        func_?(ppIVar10,0);
        return 0;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MVMaterialRepository+<GenerateMaterialButtonTextureRoutine>d__26::
     MVMaterialRepository_GenerateMaterialButtonTextureRoutine_d_26_System_Collections_IEnumerator_Reset
               (MVMaterialRepository_GenerateMaterialButtonTextureRoutine_d_26 *this,
               MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__MVMaterialRepository___GenerateMaterialButtonTextureRoutine_d__26__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

