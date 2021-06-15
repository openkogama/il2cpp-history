
/* Void Awake() */

void Assembly-CSharp.dll::CFX_ShurikenThreadFix::CFX_ShurikenThreadFix_Awake
               (CFX_ShurikenThreadFix *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
           GameObject_GetComponentsInChildren_29
                     ((GameObject *)this,
                      UnityEngine__ParticleSystem__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                     );
  uVar3 = 0;
  (this->fields).systems = (ParticleSystem__Array *)pUVar2;
  if (pUVar2 == (UseInteratorVisualization__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    ppUVar4 = pUVar2->vector;
    while( true ) {
      if ((int)pUVar2->max_length <= (int)uVar3) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                  ((MonoBehaviour *)this,StringLiteral_WaitFrame,(MethodInfo *)0x0);
        return;
      }
      if (pUVar2->max_length <= uVar3) break;
      if (*ppUVar4 == (UseInteratorVisualization *)0x0) goto code_?;
      pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)*ppUVar4,(MethodInfo *)0x0);
      func_?(&pOStack_1,0,0);
      uVar3 = uVar3 + 1;
      ppUVar4 = ppUVar4 + 1;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator WaitFrame() */

IEnumerator *
Assembly-CSharp.dll::CFX_ShurikenThreadFix::CFX_ShurikenThreadFix_WaitFrame
          (CFX_ShurikenThreadFix *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CFX_ShurikenThreadFix___WaitFrame_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}

