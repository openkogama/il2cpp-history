
/* Void ThrowSwitchExpressionException(Object) */

void Assembly-CSharp.dll::<PrivateImplementationDetails>::
     _PrivateImplementationDetails__ThrowSwitchExpressionException
               (Object *unmatchedValue,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Runtime__CompilerServices__SwitchExpressionException);
  this = (SwitchExpressionException *)func_?(uVar1);
  mscorlib.dll::System::Runtime::CompilerServices::SwitchExpressionException::
  SwitchExpressionException__ctor_1(this,unmatchedValue,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo___PrivateImplementationDetails___ThrowSwitchExpressionException_System__Object_
                 );
  func_?(this);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

