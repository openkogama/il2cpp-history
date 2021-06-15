
/* Void Interact(Single) */

void Assembly-CSharp.dll::NPCHealth::NPCHealth_Interact
               (NPCHealth *this,float amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (NPCHealth *)((this->fields).curHealth + amount);
  pNVar2 = (NPCHealth *)(this->fields).MaxHealth;
  (this->fields).curHealth = (float)pNVar1;
  if ((float)pNVar2 < (float)pNVar1) {
    (this->fields).curHealth = (float)pNVar2;
    pNVar1 = pNVar2;
  }
  if ((float)pNVar1 < 0.0) {
    (this->fields).curHealth = 0.0;
    pNVar1 = (NPCHealth *)0x0;
  }
  this = pNVar1;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_hit__,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_isAlive() */

bool Assembly-CSharp.dll::NPCHealth::NPCHealth_get_isAlive(NPCHealth *this,MethodInfo *method)

{
  return _UNK_? < (this->fields).curHealth;
}

