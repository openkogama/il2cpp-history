
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CFX_ShurikenThreadFix+<WaitFrame>c__Iterator0::
     CFX_ShurikenThreadFix_WaitFrame_c_Iterator0_MoveNext
               (CFX_ShurikenThreadFix_WaitFrame_c_Iterator0 *this,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    (this->fields)._current = (Object *)0x0;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  if (iVar2 != 1) {
    return 0;
  }
  pCVar3 = (this->fields)._this;
  if (pCVar3 != (CFX_ShurikenThreadFix *)0x0) {
    pPVar4 = (pCVar3->fields).systems;
    (this->fields)._locvar0 = pPVar4;
    (this->fields)._locvar1 = 0;
    if (pPVar4 != (ParticleSystem__Array *)0x0) {
      uVar5 = 0;
      do {
        if ((int)pPVar4->max_length <= (int)uVar5) {
          (this->fields)._PC = -1;
          return 0;
        }
        if (pPVar4 == (ParticleSystem__Array *)0x0) break;
        if (pPVar4->max_length <= uVar5) goto code_?;
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)pPVar4->vector[uVar5];
        if (this_00 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) break;
        pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                              (this_00,(MethodInfo *)0x0);
        func_?(&pOStack_1,1,0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  ((ParticleSystem *)this_00,1,(MethodInfo *)0x0);
        uVar5 = (this->fields)._locvar1 + 1;
        (this->fields)._locvar1 = uVar5;
        pPVar4 = (this->fields)._locvar0;
      } while (pPVar4 != (ParticleSystem__Array *)0x0);
    }
  }
  func_?(0);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Reset() */

void Assembly-CSharp.dll::CFX_ShurikenThreadFix+<WaitFrame>c__Iterator0::
     CFX_ShurikenThreadFix_WaitFrame_c_Iterator0_Reset
               (CFX_ShurikenThreadFix_WaitFrame_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

