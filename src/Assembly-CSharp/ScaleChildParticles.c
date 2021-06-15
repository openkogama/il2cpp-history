
/* Void Start() */

void Assembly-CSharp.dll::ScaleChildParticles::ScaleChildParticles_Start
               (ScaleChildParticles *this,MethodInfo *method)

{
  uVar1 = 0;
  pOStack_2 = (Object *)0x0;
  pPVar3 = (this->fields).ToScale;
  pOStack_4 = (Object *)0x0;
  if (pPVar3 != (ParticleSystem__Array *)0x0) {
    ppPVar5 = pPVar3->vector;
    while( true ) {
      if ((int)pPVar3->max_length <= (int)uVar1) {
        return;
      }
      if (pPVar3->max_length <= uVar1) break;
      if ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)*ppPVar5 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)*ppPVar5,(MethodInfo *)0x0);
      fVar6 = (float10)func_?(&pOStack_2,0);
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).Source;
      if (this_00 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      pOStack_4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (this_00,(MethodInfo *)0x0);
      fVar7 = (float10)func_?(&pOStack_4,0);
      func_?(&pOStack_2,(float)fVar7 * (float)fVar6,0);
      uVar1 = uVar1 + 1;
      ppPVar5 = ppPVar5 + 1;
    }
    uVar8 = func_?(0,0);
    func_?(uVar8);
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

