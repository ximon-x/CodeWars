defmodule ElixirOfLifeTest do
  use ExUnit.Case
  doctest ElixirOfLife

  test "greets the world" do
    assert ElixirOfLife.hello() == :world
  end
end
