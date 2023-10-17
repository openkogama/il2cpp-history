
/* Void Interact(Single) */

void Assembly-CSharp.dll::NPCHealth::NPCHealth_Interact
               (NPCHealth *this,float amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_hit__);
    cRam_? = '\x01';
  }
  fVar1 = amount + (this->fields).curHealth;
  pfVar2 = &(this->fields).MaxHealth;
  (this->fields).curHealth = fVar1;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    (this->fields).curHealth = (this->fields).MaxHealth;
  }
  pfVar2 = &(this->fields).curHealth;
  if (*pfVar2 <= 0.0 && *pfVar2 != 0.0) {
    (this->fields).curHealth = 0.0;
  }
  pSVar3 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&(this->fields).curHealth,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_hit__,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::NPCHealth::NPCHealth_Start(NPCHealth *this,MethodInfo *method)

{
  (this->fields).curHealth = (this->fields).MaxHealth;
  return;
}


/* NPCHealth() */

void Assembly-CSharp.dll::NPCHealth::NPCHealth__ctor(NPCHealth *this,MethodInfo *method)

{
  (this->fields).MaxHealth = 10.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_isAlive() */

bool Assembly-CSharp.dll::NPCHealth::NPCHealth_get_isAlive(NPCHealth *this,MethodInfo *method)

{
  return _UNK_? < (this->fields).curHealth;
}

