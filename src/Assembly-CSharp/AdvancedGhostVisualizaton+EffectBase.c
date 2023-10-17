
/* Boolean Update(AdvancedGhostVisualizaton) */

bool Assembly-CSharp.dll::AdvancedGhostVisualizaton+EffectBase::
     AdvancedGhostVisualizaton_EffectBase_Update
               (AdvancedGhostVisualizaton_EffectBase *this,
               AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  fVar1 = (this->fields).timeLeft;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields).timeLeft = fVar1;
  if (fVar1 <= 0.0) {
    (this->fields).timeLeft = 0.0;
  }
  pAVar3 = this->klass;
  if (0.0 < (this->fields).timeLeft) {
    (*(pAVar3->vtable).__unknown.methodPtr)
              (this,ghostVisualizaton,(pAVar3->vtable).__unknown.method);
    return 0;
  }
  (*(pAVar3->vtable).__unknown_1.methodPtr)
            (this,ghostVisualizaton,(pAVar3->vtable).__unknown_1.method);
  return 1;
}

