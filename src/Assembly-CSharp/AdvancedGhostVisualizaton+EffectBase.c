
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
    (*(code *)(pAVar3->vtable).__unknown.method)
              (this,ghostVisualizaton,(pAVar3->vtable).__unknown_1.methodPtr);
    return 0;
  }
  (*(code *)(pAVar3->vtable).__unknown_1.method)(this,ghostVisualizaton,pAVar3[1]._0.image);
  return 1;
}

