
/* Boolean Update(AdvancedGhostVisualizaton) */

bool Assembly-CSharp.dll::AdvancedGhostVisualizaton+EffectBase::
     AdvancedGhostVisualizaton_EffectBase_Update
               (AdvancedGhostVisualizaton_EffectBase *this,
               AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  fVar1 = (this->fields).timeLeft;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    bVar4 = (*pcVar2)();
    return bVar4;
  }
  pcRam_? = pcVar2;
  fVar5 = (float)(*pcRam_?)();
  fVar1 = fVar1 - fVar5;
  (this->fields).timeLeft = fVar1;
  if (fVar1 <= 0.0) {
    (this->fields).timeLeft = 0.0;
  }
  pAVar6 = this->klass;
  if ((this->fields).timeLeft <= 0.0) {
    (*(pAVar6->vtable).__unknown_1.methodPtr)
              (this,ghostVisualizaton,(pAVar6->vtable).__unknown_1.method);
    return 1;
  }
  (*(pAVar6->vtable).__unknown.methodPtr)(this,ghostVisualizaton,(pAVar6->vtable).__unknown.method);
  return 0;
}

