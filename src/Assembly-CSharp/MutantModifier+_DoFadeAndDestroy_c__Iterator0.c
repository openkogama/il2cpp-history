
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MutantModifier+<DoFadeAndDestroy>c__Iterator0::
     MutantModifier_DoFadeAndDestroy_c_Iterator0_MoveNext
               (MutantModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    pMVar3 = (this->fields)._this;
    if ((pMVar3 == (MutantModifier *)0x0) ||
       (pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(pMVar3->fields).fireParticles,
       pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) goto code_?;
    pMVar5 = &this->fields;
    pPVar6 = (ParticleSystem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                       (pDVar4,(MethodInfo *)0x0);
    (pMVar5->_em___0).m_ParticleSystem = pPVar6;
    func_?(pMVar5,0,0);
    pMVar3 = (pMVar1->fields)._this;
    if ((pMVar3 == (MutantModifier *)0x0) ||
       (pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(pMVar3->fields).fireParticles,
       pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) goto code_?;
    pPVar7 = &(pMVar1->fields)._main___0;
    pPVar6 = (ParticleSystem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                       (pDVar4,(MethodInfo *)0x0);
    pPVar7->m_ParticleSystem = pPVar6;
    func_?(pPVar7,0,0);
  }
  else if (iVar2 != 1) {
    return 0;
  }
  pMVar3 = (pMVar1->fields)._this;
  if ((pMVar3 != (MutantModifier *)0x0) &&
     (pPVar6 = (pMVar3->fields).fireParticles, pPVar6 != (ParticleSystem *)0x0)) {
    iVar8 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_particleCount(pPVar6,(MethodInfo *)0x0);
    if (0 < iVar8) {
      this = (MutantModifier_DoFadeAndDestroy_c_Iterator0 *)0x0;
      pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pMVar1->fields)._current = pOVar9;
      if ((pMVar1->fields)._disposing == 0) {
        (pMVar1->fields)._PC = 1;
      }
      return 1;
    }
    pMVar3 = (pMVar1->fields)._this;
    if (pMVar3 != (MutantModifier *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pMVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      (pMVar1->fields)._PC = -1;
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void Reset() */

void Assembly-CSharp.dll::MutantModifier+<DoFadeAndDestroy>c__Iterator0::
     MutantModifier_DoFadeAndDestroy_c_Iterator0_Reset
               (MutantModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

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

